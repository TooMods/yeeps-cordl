#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__IDebugDisplaySettingsPanel_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel.get_PanelName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel::*)()>(
    &::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel::get_PanelName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel.get_Widgets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> (
    ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel::*)()>(&::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel::get_Widgets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*>::get(), 1));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel::get_PanelName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*> UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel::get_Widgets() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanel*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::__DebugUI__Widget*, ::Array<::UnityEngine::Rendering::__DebugUI__Widget*>*>, false>(this, ___internal_method);
}
