#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/zzzz__ProfileAWSEndpointDiscoveryEnabled_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__ICredentialProfileSource_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled.get_Enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::*)()>(
    &::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::get_Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff567c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled*>::get(),
                                                                               "get_Enabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled.set_Enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::*)(bool)>(
    &::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::set_Enabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1ff5684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled*>::get(), "set_Enabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::*)(
    ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*)>(&::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1ff5690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::*)(
    ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*, ::StringW)>(&::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::_ctor)> {
  constexpr static std::size_t size = 0x1034;
  constexpr static std::size_t addrs = 0x1ff5ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::*)(
    ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*, ::StringW)>(&::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::Setup)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x1ff571c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::__cordl_internal_get__Enabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Enabled_k__BackingField;
}
constexpr bool const& Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::__cordl_internal_get__Enabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Enabled_k__BackingField;
}
constexpr void Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::__cordl_internal_set__Enabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Enabled_k__BackingField = value;
}
inline bool Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::get_Enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled*>::get(),
                                                                             "get_Enabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::set_Enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled*>::get(), "set_Enabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled* Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::New_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled*>(source));
}
inline void Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline ::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled* Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::New_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source,
                                                                                                                            ::StringW profileName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled*>(source, profileName));
}
inline void Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source, ::StringW profileName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, profileName);
}
inline void Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::Setup(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source, ::StringW profileName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, profileName);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::ProfileAWSEndpointDiscoveryEnabled::ProfileAWSEndpointDiscoveryEnabled() {}
