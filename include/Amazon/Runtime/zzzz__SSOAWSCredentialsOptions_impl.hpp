#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/zzzz__SSOAWSCredentialsOptions_def.hpp"
#include "Amazon/Runtime/zzzz__SsoVerificationArguments_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::SSOAWSCredentialsOptions.get_ClientName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::SSOAWSCredentialsOptions::*)()>(
    &::Amazon::Runtime::SSOAWSCredentialsOptions::get_ClientName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff46a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOAWSCredentialsOptions*>::get(),
                                                                               "get_ClientName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SSOAWSCredentialsOptions.set_ClientName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SSOAWSCredentialsOptions::*)(::StringW)>(
    &::Amazon::Runtime::SSOAWSCredentialsOptions::set_ClientName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff46ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOAWSCredentialsOptions*>::get(), "set_ClientName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SSOAWSCredentialsOptions.get_SsoVerificationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>* (::Amazon::Runtime::SSOAWSCredentialsOptions::*)()>(
    &::Amazon::Runtime::SSOAWSCredentialsOptions::get_SsoVerificationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff46b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOAWSCredentialsOptions*>::get(),
                                                                               "get_SsoVerificationCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SSOAWSCredentialsOptions.set_SsoVerificationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SSOAWSCredentialsOptions::*)(
    ::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>*)>(&::Amazon::Runtime::SSOAWSCredentialsOptions::set_SsoVerificationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff46bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOAWSCredentialsOptions*>::get(), "set_SsoVerificationCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SSOAWSCredentialsOptions.get_ProxySettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (::Amazon::Runtime::SSOAWSCredentialsOptions::*)()>(
    &::Amazon::Runtime::SSOAWSCredentialsOptions::get_ProxySettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff46c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOAWSCredentialsOptions*>::get(),
                                                                               "get_ProxySettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SSOAWSCredentialsOptions.set_ProxySettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SSOAWSCredentialsOptions::*)(::System::Net::IWebProxy*)>(
    &::Amazon::Runtime::SSOAWSCredentialsOptions::set_ProxySettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff46cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOAWSCredentialsOptions*>::get(), "set_ProxySettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SSOAWSCredentialsOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SSOAWSCredentialsOptions::*)()>(&::Amazon::Runtime::SSOAWSCredentialsOptions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ff2d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOAWSCredentialsOptions*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Runtime::SSOAWSCredentialsOptions::__cordl_internal_get__ClientName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientName_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::SSOAWSCredentialsOptions::__cordl_internal_get__ClientName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientName_k__BackingField;
}
constexpr void Amazon::Runtime::SSOAWSCredentialsOptions::__cordl_internal_set__ClientName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ClientName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>*& Amazon::Runtime::SSOAWSCredentialsOptions::__cordl_internal_get__SsoVerificationCallback_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SsoVerificationCallback_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>*> const&
Amazon::Runtime::SSOAWSCredentialsOptions::__cordl_internal_get__SsoVerificationCallback_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SsoVerificationCallback_k__BackingField;
}
constexpr void Amazon::Runtime::SSOAWSCredentialsOptions::__cordl_internal_set__SsoVerificationCallback_k__BackingField(::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SsoVerificationCallback_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IWebProxy*& Amazon::Runtime::SSOAWSCredentialsOptions::__cordl_internal_get__ProxySettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProxySettings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& Amazon::Runtime::SSOAWSCredentialsOptions::__cordl_internal_get__ProxySettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProxySettings_k__BackingField;
}
constexpr void Amazon::Runtime::SSOAWSCredentialsOptions::__cordl_internal_set__ProxySettings_k__BackingField(::System::Net::IWebProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ProxySettings_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Runtime::SSOAWSCredentialsOptions::get_ClientName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOAWSCredentialsOptions*>::get(),
                                                                             "get_ClientName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::SSOAWSCredentialsOptions::set_ClientName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOAWSCredentialsOptions*>::get(), "set_ClientName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>* Amazon::Runtime::SSOAWSCredentialsOptions::get_SsoVerificationCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOAWSCredentialsOptions*>::get(),
                                                                             "get_SsoVerificationCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::SSOAWSCredentialsOptions::set_SsoVerificationCallback(::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOAWSCredentialsOptions*>::get(), "set_SsoVerificationCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Amazon::Runtime::SsoVerificationArguments*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::IWebProxy* Amazon::Runtime::SSOAWSCredentialsOptions::get_ProxySettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOAWSCredentialsOptions*>::get(),
                                                                             "get_ProxySettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::SSOAWSCredentialsOptions::set_ProxySettings(::System::Net::IWebProxy* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOAWSCredentialsOptions*>::get(), "set_ProxySettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::SSOAWSCredentialsOptions* Amazon::Runtime::SSOAWSCredentialsOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::SSOAWSCredentialsOptions*>());
}
inline void Amazon::Runtime::SSOAWSCredentialsOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SSOAWSCredentialsOptions*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::SSOAWSCredentialsOptions::SSOAWSCredentialsOptions() {}
