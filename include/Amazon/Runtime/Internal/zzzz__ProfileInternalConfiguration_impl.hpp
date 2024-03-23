#pragma once
#include "Amazon/Runtime/Internal/zzzz__InternalConfiguration_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__ProfileInternalConfiguration_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__ICredentialProfileSource_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Logger_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::ProfileInternalConfiguration._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ProfileInternalConfiguration::*)(
    ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*)>(&::Amazon::Runtime::Internal::ProfileInternalConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x23d7fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ProfileInternalConfiguration*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ProfileInternalConfiguration._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ProfileInternalConfiguration::*)(
    ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*, ::StringW)>(&::Amazon::Runtime::Internal::ProfileInternalConfiguration::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x23d8548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ProfileInternalConfiguration*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ProfileInternalConfiguration.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ProfileInternalConfiguration::*)(
    ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*, ::StringW)>(&::Amazon::Runtime::Internal::ProfileInternalConfiguration::Setup)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x23d80bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ProfileInternalConfiguration*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::Internal::Util::Logger*& Amazon::Runtime::Internal::ProfileInternalConfiguration::__cordl_internal_get__logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& Amazon::Runtime::Internal::ProfileInternalConfiguration::__cordl_internal_get__logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger;
}
constexpr void Amazon::Runtime::Internal::ProfileInternalConfiguration::__cordl_internal_set__logger(::Amazon::Runtime::Internal::Util::Logger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::ProfileInternalConfiguration*
Amazon::Runtime::Internal::ProfileInternalConfiguration::New_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::ProfileInternalConfiguration*>(source));
}
inline void Amazon::Runtime::Internal::ProfileInternalConfiguration::_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ProfileInternalConfiguration*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline ::Amazon::Runtime::Internal::ProfileInternalConfiguration*
Amazon::Runtime::Internal::ProfileInternalConfiguration::New_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source, ::StringW profileName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::ProfileInternalConfiguration*>(source, profileName));
}
inline void Amazon::Runtime::Internal::ProfileInternalConfiguration::_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source, ::StringW profileName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ProfileInternalConfiguration*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, profileName);
}
inline void Amazon::Runtime::Internal::ProfileInternalConfiguration::Setup(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source, ::StringW profileName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ProfileInternalConfiguration*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, profileName);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::ProfileInternalConfiguration::ProfileInternalConfiguration() {}
