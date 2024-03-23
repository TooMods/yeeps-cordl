#pragma once
#include "Amazon/Util/zzzz__ProfileSettingsBase_impl.hpp"
#include "Amazon/Util/zzzz__AWSCredentialsProfile_def.hpp"
#include "Amazon/Runtime/Internal/Settings/zzzz__SettingsCollection_def.hpp"
#include "Amazon/Runtime/zzzz__BasicAWSCredentials_def.hpp"
//  Writing Method size for method: ::Amazon::Util::AWSCredentialsProfile.get_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::BasicAWSCredentials* (::Amazon::Util::AWSCredentialsProfile::*)()>(
    &::Amazon::Util::AWSCredentialsProfile::get_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220d89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "get_Credentials",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSCredentialsProfile.set_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::AWSCredentialsProfile::*)(::Amazon::Runtime::BasicAWSCredentials*)>(
    &::Amazon::Util::AWSCredentialsProfile::set_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220d8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "set_Credentials", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::BasicAWSCredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSCredentialsProfile.CanCreateFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Amazon::Util::AWSCredentialsProfile::CanCreateFrom)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x220c748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "CanCreateFrom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSCredentialsProfile.CanCreateFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*)>(
    &::Amazon::Util::AWSCredentialsProfile::CanCreateFrom)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x220d8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "CanCreateFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSCredentialsProfile.LoadFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::AWSCredentialsProfile* (*)(::StringW)>(&::Amazon::Util::AWSCredentialsProfile::LoadFrom)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x220c758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "LoadFrom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSCredentialsProfile.LoadFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Util::AWSCredentialsProfile* (*)(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*)>(&::Amazon::Util::AWSCredentialsProfile::LoadFrom)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x220dbd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "LoadFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSCredentialsProfile.Validate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Amazon::Util::AWSCredentialsProfile::Validate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x220de6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "Validate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSCredentialsProfile.Validate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*)>(
    &::Amazon::Util::AWSCredentialsProfile::Validate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x220dadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "Validate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSCredentialsProfile.Persist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::AWSCredentialsProfile::*)()>(&::Amazon::Util::AWSCredentialsProfile::Persist)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x220de7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSCredentialsProfile.Persist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::Amazon::Util::AWSCredentialsProfile::Persist)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x220b0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "Persist", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSCredentialsProfile._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::AWSCredentialsProfile::*)(::StringW, ::StringW, ::StringW)>(
    &::Amazon::Util::AWSCredentialsProfile::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x220ddd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::BasicAWSCredentials*& Amazon::Util::AWSCredentialsProfile::__cordl_internal_get__Credentials_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Credentials_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::BasicAWSCredentials*> const& Amazon::Util::AWSCredentialsProfile::__cordl_internal_get__Credentials_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Credentials_k__BackingField;
}
constexpr void Amazon::Util::AWSCredentialsProfile::__cordl_internal_set__Credentials_k__BackingField(::Amazon::Runtime::BasicAWSCredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Credentials_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::BasicAWSCredentials* Amazon::Util::AWSCredentialsProfile::get_Credentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "get_Credentials",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::BasicAWSCredentials*, false>(this, ___internal_method);
}
inline void Amazon::Util::AWSCredentialsProfile::set_Credentials(::Amazon::Runtime::BasicAWSCredentials* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "set_Credentials", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::BasicAWSCredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Util::AWSCredentialsProfile::CanCreateFrom(::StringW profileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "CanCreateFrom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, profileName);
}
inline bool Amazon::Util::AWSCredentialsProfile::CanCreateFrom(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "CanCreateFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, os);
}
inline ::Amazon::Util::AWSCredentialsProfile* Amazon::Util::AWSCredentialsProfile::LoadFrom(::StringW profileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "LoadFrom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::AWSCredentialsProfile*, false>(nullptr, ___internal_method, profileName);
}
inline ::Amazon::Util::AWSCredentialsProfile* Amazon::Util::AWSCredentialsProfile::LoadFrom(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "LoadFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::AWSCredentialsProfile*, false>(nullptr, ___internal_method, os);
}
inline void Amazon::Util::AWSCredentialsProfile::Validate(::StringW profileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "Validate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, profileName);
}
inline void Amazon::Util::AWSCredentialsProfile::Validate(::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings* os) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "Validate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__SettingsCollection__ObjectSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, os);
}
inline ::StringW Amazon::Util::AWSCredentialsProfile::Persist() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Util::AWSCredentialsProfile::Persist(::StringW profileName, ::StringW accessKeyId, ::StringW secretKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), "Persist", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, profileName, accessKeyId, secretKey);
}
inline ::Amazon::Util::AWSCredentialsProfile* Amazon::Util::AWSCredentialsProfile::New_ctor(::StringW profileName, ::StringW accessKeyId, ::StringW secretKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::AWSCredentialsProfile*>(profileName, accessKeyId, secretKey));
}
inline void Amazon::Util::AWSCredentialsProfile::_ctor(::StringW profileName, ::StringW accessKeyId, ::StringW secretKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSCredentialsProfile*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profileName, accessKeyId, secretKey);
}
// Ctor Parameters []
constexpr ::Amazon::Util::AWSCredentialsProfile::AWSCredentialsProfile() {}
