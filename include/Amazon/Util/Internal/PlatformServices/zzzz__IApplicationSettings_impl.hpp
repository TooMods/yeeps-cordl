#pragma once
#include "Amazon/Util/Internal/PlatformServices/zzzz__IApplicationSettings_def.hpp"
#include "Amazon/Util/Internal/PlatformServices/zzzz__ApplicationSettingsMode_def.hpp"
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::IApplicationSettings.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::PlatformServices::IApplicationSettings::*)(
    ::StringW, ::StringW, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode)>(&::Amazon::Util::Internal::PlatformServices::IApplicationSettings::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IApplicationSettings*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IApplicationSettings*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::IApplicationSettings.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::Internal::PlatformServices::IApplicationSettings::*)(
    ::StringW, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode)>(&::Amazon::Util::Internal::PlatformServices::IApplicationSettings::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IApplicationSettings*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IApplicationSettings*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::IApplicationSettings.RemoveValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::PlatformServices::IApplicationSettings::*)(
    ::StringW, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode)>(&::Amazon::Util::Internal::PlatformServices::IApplicationSettings::RemoveValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IApplicationSettings*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IApplicationSettings*>::get(), 2));
    return ___internal_method;
  }
};
inline void Amazon::Util::Internal::PlatformServices::IApplicationSettings::SetValue(::StringW key, ::StringW value, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode mode) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IApplicationSettings*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value, mode);
}
inline ::StringW Amazon::Util::Internal::PlatformServices::IApplicationSettings::GetValue(::StringW key, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode mode) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IApplicationSettings*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key, mode);
}
inline void Amazon::Util::Internal::PlatformServices::IApplicationSettings::RemoveValue(::StringW key, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode mode) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::IApplicationSettings*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, mode);
}
