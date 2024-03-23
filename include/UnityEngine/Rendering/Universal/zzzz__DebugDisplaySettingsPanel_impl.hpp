#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsPanel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IDebugDisplaySettingsPanelDisposable_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IDebugDisplaySettingsPanel_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel.get_PanelName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::get_PanelName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel.get_Widgets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::get_Widgets)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2c60f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel*>::get(), "get_Widgets",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel.AddWidget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::*)(
    ::UnityEngine::Rendering::__DebugUI__Widget*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::AddWidget)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2c5d67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel*>::get(), "AddWidget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Widget*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c60f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2c5d600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable"
constexpr UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable"
constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*
UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsPanelDisposable() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel"
constexpr UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel"
constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*
UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsPanel() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::__DebugUI__Widget*>*& UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::__cordl_internal_get_m_Widgets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Widgets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::__DebugUI__Widget*>*> const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::__cordl_internal_get_m_Widgets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Widgets;
}
constexpr void
UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::__cordl_internal_set_m_Widgets(::System::Collections::Generic::List_1<::UnityEngine::Rendering::__DebugUI__Widget*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Widgets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::get_PanelName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::get_Widgets() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel*>::get(), "get_Widgets",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::AddWidget(::UnityEngine::Rendering::__DebugUI__Widget* widget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel*>::get(), "AddWidget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Widget*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, widget);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel* UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel*>());
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsPanel::DebugDisplaySettingsPanel() {}
