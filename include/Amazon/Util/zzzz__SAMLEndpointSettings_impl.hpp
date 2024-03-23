#pragma once
#include "Amazon/Util/zzzz__ProfileSettingsBase_impl.hpp"
#include "Amazon/Util/zzzz__SAMLEndpointSettings_def.hpp"
#include "Amazon/Runtime/Internal/Settings/zzzz__SettingsCollection_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Amazon::Util::SAMLEndpointSettings.get_Endpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::Amazon::Util::SAMLEndpointSettings::*)()>(&::Amazon::Util::SAMLEndpointSettings::get_Endpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220dee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "get_Endpoint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::SAMLEndpointSettings.set_Endpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::SAMLEndpointSettings::*)(::System::Uri*)>(
    &::Amazon::Util::SAMLEndpointSettings::set_Endpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220dee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "set_Endpoint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::SAMLEndpointSettings.get_AuthenticationType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::SAMLEndpointSettings::*)()>(
    &::Amazon::Util::SAMLEndpointSettings::get_AuthenticationType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x220def0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(),
                                                                               "get_AuthenticationType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::SAMLEndpointSettings.CanCreateFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Amazon::Util::SAMLEndpointSettings::CanCreateFrom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x220df5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "CanCreateFrom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::SAMLEndpointSettings.CanCreateFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*)>(
    &::Amazon::Util::SAMLEndpointSettings::CanCreateFrom)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x220e15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "CanCreateFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::SAMLEndpointSettings.LoadFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::SAMLEndpointSettings* (*)(::StringW)>(&::Amazon::Util::SAMLEndpointSettings::LoadFrom)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x220d498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "LoadFrom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::SAMLEndpointSettings.LoadFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Util::SAMLEndpointSettings* (*)(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*)>(&::Amazon::Util::SAMLEndpointSettings::LoadFrom)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x220e1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "LoadFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::SAMLEndpointSettings.Validate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Amazon::Util::SAMLEndpointSettings::Validate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x220e6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "Validate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::SAMLEndpointSettings.Validate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*)>(
    &::Amazon::Util::SAMLEndpointSettings::Validate)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x220e438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "Validate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::SAMLEndpointSettings.Persist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::SAMLEndpointSettings::*)()>(&::Amazon::Util::SAMLEndpointSettings::Persist)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x220e718;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::SAMLEndpointSettings.Persist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::Uri*, ::StringW)>(&::Amazon::Util::SAMLEndpointSettings::Persist)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x220b8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "Persist", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::SAMLEndpointSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::SAMLEndpointSettings::*)(::StringW, ::System::Uri*, ::StringW)>(
    &::Amazon::Util::SAMLEndpointSettings::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x220e670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::SAMLEndpointSettings.LoadSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* (*)(::StringW)>(
    &::Amazon::Util::SAMLEndpointSettings::LoadSettings)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x220dfb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "LoadSettings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& Amazon::Util::SAMLEndpointSettings::__cordl_internal_get__Endpoint_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Endpoint_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& Amazon::Util::SAMLEndpointSettings::__cordl_internal_get__Endpoint_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Endpoint_k__BackingField;
}
constexpr void Amazon::Util::SAMLEndpointSettings::__cordl_internal_set__Endpoint_k__BackingField(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Endpoint_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Util::SAMLEndpointSettings::__cordl_internal_get__authenticationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____authenticationType;
}
constexpr ::StringW const& Amazon::Util::SAMLEndpointSettings::__cordl_internal_get__authenticationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____authenticationType;
}
constexpr void Amazon::Util::SAMLEndpointSettings::__cordl_internal_set__authenticationType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____authenticationType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Util::SAMLEndpointSettings::setStaticF_DefaultAuthenticationType(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DefaultAuthenticationType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Amazon::Util::SAMLEndpointSettings::getStaticF_DefaultAuthenticationType() {
  return ::cordl_internals::getStaticField<::StringW, "DefaultAuthenticationType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get>();
}
inline ::System::Uri* Amazon::Util::SAMLEndpointSettings::get_Endpoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "get_Endpoint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline void Amazon::Util::SAMLEndpointSettings::set_Endpoint(::System::Uri* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "set_Endpoint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Util::SAMLEndpointSettings::get_AuthenticationType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(),
                                                                             "get_AuthenticationType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Amazon::Util::SAMLEndpointSettings::CanCreateFrom(::StringW endpointName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "CanCreateFrom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, endpointName);
}
inline bool Amazon::Util::SAMLEndpointSettings::CanCreateFrom(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "CanCreateFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, os);
}
inline ::Amazon::Util::SAMLEndpointSettings* Amazon::Util::SAMLEndpointSettings::LoadFrom(::StringW endpointName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "LoadFrom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::SAMLEndpointSettings*, false>(nullptr, ___internal_method, endpointName);
}
inline ::Amazon::Util::SAMLEndpointSettings* Amazon::Util::SAMLEndpointSettings::LoadFrom(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "LoadFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::SAMLEndpointSettings*, false>(nullptr, ___internal_method, os);
}
inline void Amazon::Util::SAMLEndpointSettings::Validate(::StringW endpointName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "Validate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, endpointName);
}
inline void Amazon::Util::SAMLEndpointSettings::Validate(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "Validate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, os);
}
inline ::StringW Amazon::Util::SAMLEndpointSettings::Persist() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Util::SAMLEndpointSettings::Persist(::StringW settingsName, ::System::Uri* endpoint, ::StringW authenticationType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "Persist", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, settingsName, endpoint, authenticationType);
}
inline ::Amazon::Util::SAMLEndpointSettings* Amazon::Util::SAMLEndpointSettings::New_ctor(::StringW settingsName, ::System::Uri* endpoint, ::StringW authenticationType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::SAMLEndpointSettings*>(settingsName, endpoint, authenticationType));
}
inline void Amazon::Util::SAMLEndpointSettings::_ctor(::StringW settingsName, ::System::Uri* endpoint, ::StringW authenticationType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settingsName, endpoint, authenticationType);
}
inline ::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* Amazon::Util::SAMLEndpointSettings::LoadSettings(::StringW endpointName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::SAMLEndpointSettings*>::get(), "LoadSettings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*, false>(nullptr, ___internal_method, endpointName);
}
// Ctor Parameters []
constexpr ::Amazon::Util::SAMLEndpointSettings::SAMLEndpointSettings() {}
