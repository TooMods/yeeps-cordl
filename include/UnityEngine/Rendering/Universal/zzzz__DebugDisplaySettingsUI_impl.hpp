#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsUI_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsUI_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IDebugDisplaySettingsData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IDebugDisplaySettingsPanelDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugManager_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0::*)()>(
    &::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c63390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0._RegisterDebug_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0::*)(
    ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*)>(&::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0::_RegisterDebug_b__0)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2c6341c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0*>::get(), "<RegisterDebug>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DebugManager*& UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0::__cordl_internal_get_debugManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugManager;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::DebugManager*> const&
UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0::__cordl_internal_get_debugManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugManager;
}
constexpr void UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0::__cordl_internal_set_debugManager(::UnityEngine::Rendering::DebugManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___debugManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>*&
UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0::__cordl_internal_get_panels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panels;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>*> const&
UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0::__cordl_internal_get_panels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panels;
}
constexpr void UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0::__cordl_internal_set_panels(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0* UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0*>());
}
inline void UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0::_RegisterDebug_b__0(::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData* data) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0*>::get(),
                                 "<RegisterDebug>b__0", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::__DebugDisplaySettingsUI____c__DisplayClass3_0::__DebugDisplaySettingsUI____c__DisplayClass3_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::Reset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2c62ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI*>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI.RegisterDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::*)(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettings*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::RegisterDebug)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2c63240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI*>::get(), "RegisterDebug", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI.UnregisterDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::UnregisterDebug)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x2c62d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI*>::get(), "UnregisterDebug",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI.GetReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::GetReset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2c63398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI*>::get(), "GetReset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c63414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugData"
constexpr UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::operator ::UnityEngine::Rendering::IDebugData*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugData*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugData"
constexpr ::UnityEngine::Rendering::IDebugData* UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::i___UnityEngine__Rendering__IDebugData() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugData*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>*&
UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::__cordl_internal_get_m_DisposablePanels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisposablePanels;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>*> const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::__cordl_internal_get_m_DisposablePanels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisposablePanels;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::__cordl_internal_set_m_DisposablePanels(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DisposablePanels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettings*& UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugDisplaySettings*> const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::__cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::DebugDisplaySettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI*>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::RegisterDebug(::UnityEngine::Rendering::Universal::DebugDisplaySettings* settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI*>::get(), "RegisterDebug", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::UnregisterDebug() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI*>::get(), "UnregisterDebug",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Action* UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::GetReset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI*>::get(), "GetReset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI* UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI*>());
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI::DebugDisplaySettingsUI() {}
