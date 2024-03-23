#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__AWSCredentialsFactory_def.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/zzzz__CredentialProfileType_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__CredentialProfileOptions_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__CredentialProfile_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__ICredentialProfileSource_def.hpp"
#include "Amazon/Runtime/zzzz__AWSCredentials_def.hpp"
#include "Amazon/Runtime/zzzz__BasicAWSCredentials_def.hpp"
#include "Amazon/zzzz__RegionEndpoint_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory.GetAWSCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::AWSCredentials* (*)(::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*)>(
        &::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::GetAWSCredentials)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x20274f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "GetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory.GetAWSCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::AWSCredentials* (*)(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*, ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*)>(
        &::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::GetAWSCredentials)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2027820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "GetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory.GetAWSCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::AWSCredentials* (*)(::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*, bool)>(
        &::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::GetAWSCredentials)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2027890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "GetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory.GetAWSCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::AWSCredentials* (*)(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*, ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*, bool)>(
        &::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::GetAWSCredentials)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2027914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "GetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory.TryGetAWSCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::Amazon::Runtime::CredentialManagement::CredentialProfile*, ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*, ByRef<::Amazon::Runtime::AWSCredentials*>)>(
        &::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::TryGetAWSCredentials)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2027988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "TryGetAWSCredentials",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::AWSCredentials*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory.TryGetAWSCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*, ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*, ByRef<::Amazon::Runtime::AWSCredentials*>)>(
    &::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::TryGetAWSCredentials)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x20283c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "TryGetAWSCredentials",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::AWSCredentials*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory.IsCallbackRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>)>(
    &::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::IsCallbackRequired)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x202877c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "IsCallbackRequired", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory.GetAWSCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Amazon::Runtime::AWSCredentials* (*)(::StringW, ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*, ::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*,
                                           ::Amazon::RegionEndpoint*, bool)>(&::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::GetAWSCredentials)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x2027570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "GetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory.GetAWSCredentialsInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::AWSCredentials* (*)(::StringW, ::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>,
                                                       ::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*, ::Amazon::RegionEndpoint*,
                                                       ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*, bool, ::System::Collections::Generic::HashSet_1<::StringW>*)>(
        &::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::GetAWSCredentialsInternal)> {
  constexpr static std::size_t size = 0x928;
  constexpr static std::size_t addrs = 0x2027a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "GetAWSCredentialsInternal",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 7>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory.GetCredentialSourceAWSCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AWSCredentials* (*)(::StringW, bool)>(
    &::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::GetCredentialSourceAWSCredentials)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x2028ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "GetCredentialSourceAWSCredentials",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory.GetSourceAWSCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Runtime::AWSCredentials* (*)(::StringW, ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*, bool, ::System::Collections::Generic::HashSet_1<::StringW>*)>(
        &::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::GetSourceAWSCredentials)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x20288ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "GetSourceAWSCredentials",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory.ThrowInvalidOrReturnNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::BasicAWSCredentials* (*)(::StringW, bool)>(
    &::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::ThrowInvalidOrReturnNull)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x202920c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "ThrowInvalidOrReturnNull",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory.ThrowOrReturnNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::BasicAWSCredentials* (*)(::StringW, ::System::Exception*, bool)>(
    &::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::ThrowOrReturnNull)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2028848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "ThrowOrReturnNull", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::setStaticF_CallbackProfileTypes(
    ::System::Collections::Generic::HashSet_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>*, "CallbackProfileTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>*
Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::getStaticF_CallbackProfileTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>*, "CallbackProfileTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get>();
}
inline ::Amazon::Runtime::AWSCredentials*
Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::GetAWSCredentials(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile,
                                                                                ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "GetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(nullptr, ___internal_method, profile, profileSource);
}
inline ::Amazon::Runtime::AWSCredentials*
Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::GetAWSCredentials(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* options,
                                                                                ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "GetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(nullptr, ___internal_method, options, profileSource);
}
inline ::Amazon::Runtime::AWSCredentials*
Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::GetAWSCredentials(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile,
                                                                                ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource, bool nonCallbackOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "GetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(nullptr, ___internal_method, profile, profileSource, nonCallbackOnly);
}
inline ::Amazon::Runtime::AWSCredentials*
Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::GetAWSCredentials(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* options,
                                                                                ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource, bool nonCallbackOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "GetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(nullptr, ___internal_method, options, profileSource, nonCallbackOnly);
}
inline bool Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::TryGetAWSCredentials(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile,
                                                                                               ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource,
                                                                                               ByRef<::Amazon::Runtime::AWSCredentials*> credentials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "TryGetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfile*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::AWSCredentials*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, profile, profileSource, credentials);
}
inline bool Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::TryGetAWSCredentials(::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* options,
                                                                                               ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource,
                                                                                               ByRef<::Amazon::Runtime::AWSCredentials*> credentials) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "TryGetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::AWSCredentials*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, options, profileSource, credentials);
}
inline bool
Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::IsCallbackRequired(::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType> profileType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "IsCallbackRequired", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, profileType);
}
inline ::Amazon::Runtime::AWSCredentials*
Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::GetAWSCredentials(::StringW profileName, ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource,
                                                                                ::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* options, ::Amazon::RegionEndpoint* stsRegion,
                                                                                bool nonCallbackOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "GetAWSCredentials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(nullptr, ___internal_method, profileName, profileSource, options, stsRegion, nonCallbackOnly);
}
/// @param profileLoopAvoidance: ::System::Collections::Generic::HashSet_1<::StringW>* (default: nullptr)
inline ::Amazon::Runtime::AWSCredentials* Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::GetAWSCredentialsInternal(
    ::StringW profileName, ::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType> profileType,
    ::Amazon::Runtime::CredentialManagement::CredentialProfileOptions* options, ::Amazon::RegionEndpoint* stsRegion, ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource,
    bool throwIfInvalid, ::System::Collections::Generic::HashSet_1<::StringW>* profileLoopAvoidance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "GetAWSCredentialsInternal",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::CredentialProfileOptions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(nullptr, ___internal_method, profileName, profileType, options, stsRegion, profileSource, throwIfInvalid,
                                                                                        profileLoopAvoidance);
}
inline ::Amazon::Runtime::AWSCredentials* Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::GetCredentialSourceAWSCredentials(::StringW credentialSourceType, bool throwIfInvalid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "GetCredentialSourceAWSCredentials",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(nullptr, ___internal_method, credentialSourceType, throwIfInvalid);
}
/// @param profileLoopAvoidance: ::System::Collections::Generic::HashSet_1<::StringW>* (default: nullptr)
inline ::Amazon::Runtime::AWSCredentials*
Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::GetSourceAWSCredentials(::StringW sourceProfileName, ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource* profileSource,
                                                                                      bool throwIfInvalid, ::System::Collections::Generic::HashSet_1<::StringW>* profileLoopAvoidance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "GetSourceAWSCredentials",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AWSCredentials*, false>(nullptr, ___internal_method, sourceProfileName, profileSource, throwIfInvalid, profileLoopAvoidance);
}
inline ::Amazon::Runtime::BasicAWSCredentials* Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::ThrowInvalidOrReturnNull(::StringW profileName, bool doThrow) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "ThrowInvalidOrReturnNull",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::BasicAWSCredentials*, false>(nullptr, ___internal_method, profileName, doThrow);
}
inline ::Amazon::Runtime::BasicAWSCredentials* Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::ThrowOrReturnNull(::StringW message, ::System::Exception* innerException, bool doThrow) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory*>::get(), "ThrowOrReturnNull", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::BasicAWSCredentials*, false>(nullptr, ___internal_method, message, innerException, doThrow);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::CredentialManagement::AWSCredentialsFactory::AWSCredentialsFactory() {}
