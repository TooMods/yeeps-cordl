#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__ProfileCSMConfigs_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__ICredentialProfileSource_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__CSMFallbackConfigChain_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::ProfileCSMConfigs.get_ProfileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::ProfileCSMConfigs::*)()>(
    &::Amazon::Runtime::Internal::ProfileCSMConfigs::get_ProfileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2035b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ProfileCSMConfigs*>::get(),
                                                                               "get_ProfileName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ProfileCSMConfigs.set_ProfileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ProfileCSMConfigs::*)(::StringW)>(
    &::Amazon::Runtime::Internal::ProfileCSMConfigs::set_ProfileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2035b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ProfileCSMConfigs*>::get(), "set_ProfileName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ProfileCSMConfigs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ProfileCSMConfigs::*)(
    ::Amazon::Runtime::Internal::CSMFallbackConfigChain*, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&::Amazon::Runtime::Internal::ProfileCSMConfigs::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2035b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ProfileCSMConfigs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ProfileCSMConfigs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ProfileCSMConfigs::*)(
    ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*, ::Amazon::Runtime::Internal::CSMFallbackConfigChain*)>(&::Amazon::Runtime::Internal::ProfileCSMConfigs::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2035950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ProfileCSMConfigs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ProfileCSMConfigs.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ProfileCSMConfigs::*)(
    ::Amazon::Runtime::Internal::CSMFallbackConfigChain*, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&::Amazon::Runtime::Internal::ProfileCSMConfigs::Setup)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x2035b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ProfileCSMConfigs*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Runtime::Internal::ProfileCSMConfigs::__cordl_internal_get__ProfileName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProfileName_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::ProfileCSMConfigs::__cordl_internal_get__ProfileName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProfileName_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::ProfileCSMConfigs::__cordl_internal_set__ProfileName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ProfileName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Runtime::Internal::ProfileCSMConfigs::get_ProfileName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ProfileCSMConfigs*>::get(),
                                                                             "get_ProfileName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::ProfileCSMConfigs::set_ProfileName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ProfileCSMConfigs*>::get(), "set_ProfileName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::ProfileCSMConfigs* Amazon::Runtime::Internal::ProfileCSMConfigs::New_ctor(::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain,
                                                                                                              ::StringW profileName,
                                                                                                              ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* profileProperties) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::ProfileCSMConfigs*>(cSMFallbackConfigChain, profileName, profileProperties));
}
inline void Amazon::Runtime::Internal::ProfileCSMConfigs::_ctor(::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain, ::StringW profileName,
                                                                ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* profileProperties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ProfileCSMConfigs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cSMFallbackConfigChain, profileName, profileProperties);
}
inline ::Amazon::Runtime::Internal::ProfileCSMConfigs* Amazon::Runtime::Internal::ProfileCSMConfigs::New_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source,
                                                                                                              ::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::ProfileCSMConfigs*>(source, cSMFallbackConfigChain));
}
inline void Amazon::Runtime::Internal::ProfileCSMConfigs::_ctor(::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* source,
                                                                ::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ProfileCSMConfigs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, cSMFallbackConfigChain);
}
inline void Amazon::Runtime::Internal::ProfileCSMConfigs::Setup(::Amazon::Runtime::Internal::CSMFallbackConfigChain* cSMFallbackConfigChain,
                                                                ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* profileProperties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ProfileCSMConfigs*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CSMFallbackConfigChain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cSMFallbackConfigChain, profileProperties);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::ProfileCSMConfigs::ProfileCSMConfigs() {}
