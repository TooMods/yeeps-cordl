#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__IDebugDisplaySettingsData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IDebugDisplaySettingsPanelDisposable_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IDebugDisplaySettingsQuery_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData.CreatePanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable* (
    ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData::*)()>(&::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData::CreatePanel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
constexpr UnityEngine::Rendering::Universal::IDebugDisplaySettingsData::operator ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery*() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery"
constexpr ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery*
UnityEngine::Rendering::Universal::IDebugDisplaySettingsData::i___UnityEngine__Rendering__Universal__IDebugDisplaySettingsQuery() noexcept {
  return static_cast<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
inline ::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable* UnityEngine::Rendering::Universal::IDebugDisplaySettingsData::CreatePanel() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsData*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::IDebugDisplaySettingsPanelDisposable*, false>(this, ___internal_method);
}
