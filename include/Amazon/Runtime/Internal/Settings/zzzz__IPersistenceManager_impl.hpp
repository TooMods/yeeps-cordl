#pragma once
#include "Amazon/Runtime/Internal/Settings/zzzz__IPersistenceManager_def.hpp"
#include "Amazon/Runtime/Internal/Settings/zzzz__SettingsCollection_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::IPersistenceManager.GetSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Settings::SettingsCollection* (
    ::Amazon::Runtime::Internal::Settings::IPersistenceManager::*)(::StringW)>(&::Amazon::Runtime::Internal::Settings::IPersistenceManager::GetSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::IPersistenceManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::IPersistenceManager*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::IPersistenceManager.SaveSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Settings::IPersistenceManager::*)(
    ::StringW, ::Amazon::Runtime::Internal::Settings::SettingsCollection*)>(&::Amazon::Runtime::Internal::Settings::IPersistenceManager::SaveSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::IPersistenceManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::IPersistenceManager*>::get(), 1));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::Settings::SettingsCollection* Amazon::Runtime::Internal::Settings::IPersistenceManager::GetSettings(::StringW type) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::IPersistenceManager*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Settings::SettingsCollection*, false>(this, ___internal_method, type);
}
inline void Amazon::Runtime::Internal::Settings::IPersistenceManager::SaveSettings(::StringW type, ::Amazon::Runtime::Internal::Settings::SettingsCollection* settings) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::IPersistenceManager*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, settings);
}
