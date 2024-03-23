#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__ServiceClientHelpers_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__ServiceClientHelpers_def.hpp"
#include "Amazon/Runtime/zzzz__AWSCredentials_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonServiceClient_def.hpp"
#include "Amazon/Runtime/zzzz__ClientConfig_def.hpp"
#include "Amazon/Util/Internal/zzzz__ITypeInfo_def.hpp"
#include "Amazon/zzzz__RegionEndpoint_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0::*)()>(
    &::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dba84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0._GetSDKAssembly_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0::*)(
    ::System::Reflection::Assembly*)>(&::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0::_GetSDKAssembly_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x23dba8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0*>::get(), "<GetSDKAssembly>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0::__cordl_internal_get_assemblyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyName;
}
constexpr ::StringW const& Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0::__cordl_internal_get_assemblyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyName;
}
constexpr void Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0::__cordl_internal_set_assemblyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assemblyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0* Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0*>());
}
inline void Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0::_GetSDKAssembly_b__0(::System::Reflection::Assembly* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0*>::get(), "<GetSDKAssembly>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::__ServiceClientHelpers____c__DisplayClass21_0::__ServiceClientHelpers____c__DisplayClass21_0() {}
//  Writing Method size for method: ::Amazon::Runtime::Internal::ServiceClientHelpers.CreateServiceConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::ClientConfig* (*)(::StringW, ::StringW)>(
    &::Amazon::Runtime::Internal::ServiceClientHelpers::CreateServiceConfig)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x23db648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceClientHelpers*>::get(), "CreateServiceConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ServiceClientHelpers.LoadServiceClientType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::Internal::ITypeInfo* (*)(::StringW, ::StringW)>(
    &::Amazon::Runtime::Internal::ServiceClientHelpers::LoadServiceClientType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23db844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceClientHelpers*>::get(), "LoadServiceClientType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ServiceClientHelpers.LoadServiceConfigType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::Internal::ITypeInfo* (*)(::StringW, ::StringW)>(
    &::Amazon::Runtime::Internal::ServiceClientHelpers::LoadServiceConfigType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23db7bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceClientHelpers*>::get(), "LoadServiceConfigType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ServiceClientHelpers.GetSDKAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (*)(::StringW)>(&::Amazon::Runtime::Internal::ServiceClientHelpers::GetSDKAssembly)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x23db8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceClientHelpers*>::get(), "GetSDKAssembly",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
template <typename TClient, typename TConfig> inline TClient Amazon::Runtime::Internal::ServiceClientHelpers::CreateServiceFromAnother(::Amazon::Runtime::AmazonServiceClient* originalServiceClient) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceClientHelpers*>::get(), "CreateServiceFromAnother",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TClient>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConfig>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonServiceClient*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TClient>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConfig>::get() }));
  return ::cordl_internals::RunMethodRethrow<TClient, false>(nullptr, ___internal_method, originalServiceClient);
}
template <typename TClient>
inline TClient Amazon::Runtime::Internal::ServiceClientHelpers::CreateServiceFromAssembly(::StringW assemblyName, ::StringW serviceClientClassName, ::Amazon::RegionEndpoint* region) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceClientHelpers*>::get(), "CreateServiceFromAssembly",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TClient>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TClient>::get() }));
  return ::cordl_internals::RunMethodRethrow<TClient, false>(nullptr, ___internal_method, assemblyName, serviceClientClassName, region);
}
template <typename TClient>
inline TClient Amazon::Runtime::Internal::ServiceClientHelpers::CreateServiceFromAssembly(::StringW assemblyName, ::StringW serviceClientClassName, ::Amazon::Runtime::AWSCredentials* credentials,
                                                                                          ::Amazon::RegionEndpoint* region) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceClientHelpers*>::get(), "CreateServiceFromAssembly",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TClient>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AWSCredentials*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TClient>::get() }));
  return ::cordl_internals::RunMethodRethrow<TClient, false>(nullptr, ___internal_method, assemblyName, serviceClientClassName, credentials, region);
}
template <typename TClient>
inline TClient Amazon::Runtime::Internal::ServiceClientHelpers::CreateServiceFromAssembly(::StringW assemblyName, ::StringW serviceClientClassName, ::Amazon::Runtime::AWSCredentials* credentials,
                                                                                          ::Amazon::Runtime::ClientConfig* config) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceClientHelpers*>::get(), "CreateServiceFromAssembly",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TClient>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AWSCredentials*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::ClientConfig*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TClient>::get() }));
  return ::cordl_internals::RunMethodRethrow<TClient, false>(nullptr, ___internal_method, assemblyName, serviceClientClassName, credentials, config);
}
template <typename TClient>
inline TClient Amazon::Runtime::Internal::ServiceClientHelpers::CreateServiceFromAssembly(::StringW assemblyName, ::StringW serviceClientClassName,
                                                                                          ::Amazon::Runtime::AmazonServiceClient* originalServiceClient) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceClientHelpers*>::get(), "CreateServiceFromAssembly",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TClient>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonServiceClient*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TClient>::get() }));
  return ::cordl_internals::RunMethodRethrow<TClient, false>(nullptr, ___internal_method, assemblyName, serviceClientClassName, originalServiceClient);
}
inline ::Amazon::Runtime::ClientConfig* Amazon::Runtime::Internal::ServiceClientHelpers::CreateServiceConfig(::StringW assemblyName, ::StringW serviceConfigClassName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceClientHelpers*>::get(), "CreateServiceConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::ClientConfig*, false>(nullptr, ___internal_method, assemblyName, serviceConfigClassName);
}
inline ::Amazon::Util::Internal::ITypeInfo* Amazon::Runtime::Internal::ServiceClientHelpers::LoadServiceClientType(::StringW assemblyName, ::StringW serviceClientClassName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceClientHelpers*>::get(), "LoadServiceClientType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::Internal::ITypeInfo*, false>(nullptr, ___internal_method, assemblyName, serviceClientClassName);
}
inline ::Amazon::Util::Internal::ITypeInfo* Amazon::Runtime::Internal::ServiceClientHelpers::LoadServiceConfigType(::StringW assemblyName, ::StringW serviceConfigClassName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceClientHelpers*>::get(), "LoadServiceConfigType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::Internal::ITypeInfo*, false>(nullptr, ___internal_method, assemblyName, serviceConfigClassName);
}
inline ::System::Reflection::Assembly* Amazon::Runtime::Internal::ServiceClientHelpers::GetSDKAssembly(::StringW assemblyName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ServiceClientHelpers*>::get(), "GetSDKAssembly",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(nullptr, ___internal_method, assemblyName);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::ServiceClientHelpers::ServiceClientHelpers() {}
