#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Util/Internal/PlatformServices/zzzz__ApplicationSettings_def.hpp"
#include "Amazon/Util/Internal/PlatformServices/zzzz__ApplicationSettingsMode_def.hpp"
#include "Amazon/Util/Internal/PlatformServices/zzzz__IApplicationSettings_def.hpp"
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::ApplicationSettings.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::PlatformServices::ApplicationSettings::*)(
    ::StringW, ::StringW, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode)>(&::Amazon::Util::Internal::PlatformServices::ApplicationSettings::SetValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1fdad30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ApplicationSettings*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::ApplicationSettings.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::Internal::PlatformServices::ApplicationSettings::*)(
    ::StringW, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode)>(&::Amazon::Util::Internal::PlatformServices::ApplicationSettings::GetValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1fdad80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ApplicationSettings*>::get(), "GetValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::ApplicationSettings.RemoveValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::PlatformServices::ApplicationSettings::*)(
    ::StringW, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode)>(&::Amazon::Util::Internal::PlatformServices::ApplicationSettings::RemoveValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1fdadd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ApplicationSettings*>::get(), "RemoveValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::ApplicationSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::PlatformServices::ApplicationSettings::*)()>(
    &::Amazon::Util::Internal::PlatformServices::ApplicationSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fdae20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ApplicationSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Util::Internal::PlatformServices::IApplicationSettings"
constexpr Amazon::Util::Internal::PlatformServices::ApplicationSettings::operator ::Amazon::Util::Internal::PlatformServices::IApplicationSettings*() noexcept {
  return static_cast<::Amazon::Util::Internal::PlatformServices::IApplicationSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Util::Internal::PlatformServices::IApplicationSettings"
constexpr ::Amazon::Util::Internal::PlatformServices::IApplicationSettings*
Amazon::Util::Internal::PlatformServices::ApplicationSettings::i___Amazon__Util__Internal__PlatformServices__IApplicationSettings() noexcept {
  return static_cast<::Amazon::Util::Internal::PlatformServices::IApplicationSettings*>(static_cast<void*>(this));
}
inline void Amazon::Util::Internal::PlatformServices::ApplicationSettings::SetValue(::StringW key, ::StringW value, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode mode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ApplicationSettings*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value, mode);
}
inline ::StringW Amazon::Util::Internal::PlatformServices::ApplicationSettings::GetValue(::StringW key, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode mode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ApplicationSettings*>::get(), "GetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key, mode);
}
inline void Amazon::Util::Internal::PlatformServices::ApplicationSettings::RemoveValue(::StringW key, ::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode mode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ApplicationSettings*>::get(), "RemoveValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::PlatformServices::ApplicationSettingsMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, mode);
}
inline ::Amazon::Util::Internal::PlatformServices::ApplicationSettings* Amazon::Util::Internal::PlatformServices::ApplicationSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::Internal::PlatformServices::ApplicationSettings*>());
}
inline void Amazon::Util::Internal::PlatformServices::ApplicationSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ApplicationSettings*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Util::Internal::PlatformServices::ApplicationSettings::ApplicationSettings() {}
