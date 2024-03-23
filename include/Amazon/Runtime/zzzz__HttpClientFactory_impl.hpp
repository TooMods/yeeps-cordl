#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/zzzz__HttpClientFactory_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::HttpClientFactory.CreateHttpClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpClient* (::Amazon::Runtime::HttpClientFactory::*)(::Amazon::Runtime::IClientConfig*)>(
    &::Amazon::Runtime::HttpClientFactory::CreateHttpClient)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientFactory*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientFactory*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpClientFactory.UseSDKHttpClientCaching
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::HttpClientFactory::*)(::Amazon::Runtime::IClientConfig*)>(
    &::Amazon::Runtime::HttpClientFactory::UseSDKHttpClientCaching)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x201a354;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientFactory*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientFactory*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpClientFactory.DisposeHttpClientsAfterUse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::HttpClientFactory::*)(::Amazon::Runtime::IClientConfig*)>(
    &::Amazon::Runtime::HttpClientFactory::DisposeHttpClientsAfterUse)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x201a3f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientFactory*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientFactory*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpClientFactory.GetConfigUniqueString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::HttpClientFactory::*)(::Amazon::Runtime::IClientConfig*)>(
    &::Amazon::Runtime::HttpClientFactory::GetConfigUniqueString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201a414;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientFactory*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientFactory*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::HttpClientFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::HttpClientFactory::*)()>(&::Amazon::Runtime::HttpClientFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201a41c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientFactory*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Net::Http::HttpClient* Amazon::Runtime::HttpClientFactory::CreateHttpClient(::Amazon::Runtime::IClientConfig* clientConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientFactory*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpClient*, false>(this, ___internal_method, clientConfig);
}
inline bool Amazon::Runtime::HttpClientFactory::UseSDKHttpClientCaching(::Amazon::Runtime::IClientConfig* clientConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientFactory*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, clientConfig);
}
inline bool Amazon::Runtime::HttpClientFactory::DisposeHttpClientsAfterUse(::Amazon::Runtime::IClientConfig* clientConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientFactory*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, clientConfig);
}
inline ::StringW Amazon::Runtime::HttpClientFactory::GetConfigUniqueString(::Amazon::Runtime::IClientConfig* clientConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientFactory*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, clientConfig);
}
inline ::Amazon::Runtime::HttpClientFactory* Amazon::Runtime::HttpClientFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::HttpClientFactory*>());
}
inline void Amazon::Runtime::HttpClientFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::HttpClientFactory*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::HttpClientFactory::HttpClientFactory() {}
