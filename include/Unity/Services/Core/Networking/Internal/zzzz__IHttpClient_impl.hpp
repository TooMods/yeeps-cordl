#pragma once
#include "Unity/Services/Core/Networking/Internal/zzzz__IHttpClient_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IAsyncOperation_1_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "Unity/Services/Core/Networking/Internal/zzzz__HttpOptions_def.hpp"
#include "Unity/Services/Core/Networking/Internal/zzzz__HttpRequest_def.hpp"
#include "Unity/Services/Core/Networking/Internal/zzzz__ReadOnlyHttpResponse_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::IHttpClient.GetBaseUrlFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Core::Networking::Internal::IHttpClient::*)(::StringW)>(
    &::Unity::Services::Core::Networking::Internal::IHttpClient::GetBaseUrlFor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::IHttpClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::IHttpClient*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::IHttpClient.GetDefaultOptionsFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Networking::Internal::HttpOptions (
    ::Unity::Services::Core::Networking::Internal::IHttpClient::*)(::StringW)>(&::Unity::Services::Core::Networking::Internal::IHttpClient::GetDefaultOptionsFor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::IHttpClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::IHttpClient*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::IHttpClient.CreateRequestForService
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Networking::Internal::HttpRequest* (
    ::Unity::Services::Core::Networking::Internal::IHttpClient::*)(::StringW, ::StringW)>(&::Unity::Services::Core::Networking::Internal::IHttpClient::CreateRequestForService)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::IHttpClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::IHttpClient*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::IHttpClient.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Internal::IAsyncOperation_1<
    ::Unity::Services::Core::Networking::Internal::ReadOnlyHttpResponse>* (::Unity::Services::Core::Networking::Internal::IHttpClient::*)(::Unity::Services::Core::Networking::Internal::HttpRequest*)>(
    &::Unity::Services::Core::Networking::Internal::IHttpClient::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::IHttpClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::IHttpClient*>::get(), 3));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr Unity::Services::Core::Networking::Internal::IHttpClient::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Core::Networking::Internal::IHttpClient::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
inline ::StringW Unity::Services::Core::Networking::Internal::IHttpClient::GetBaseUrlFor(::StringW serviceId) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::IHttpClient*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, serviceId);
}
inline ::Unity::Services::Core::Networking::Internal::HttpOptions Unity::Services::Core::Networking::Internal::IHttpClient::GetDefaultOptionsFor(::StringW serviceId) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::IHttpClient*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Networking::Internal::HttpOptions, false>(this, ___internal_method, serviceId);
}
inline ::Unity::Services::Core::Networking::Internal::HttpRequest* Unity::Services::Core::Networking::Internal::IHttpClient::CreateRequestForService(::StringW serviceId, ::StringW resourcePath) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::IHttpClient*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Networking::Internal::HttpRequest*, false>(this, ___internal_method, serviceId, resourcePath);
}
inline ::Unity::Services::Core::Internal::IAsyncOperation_1<::Unity::Services::Core::Networking::Internal::ReadOnlyHttpResponse>*
Unity::Services::Core::Networking::Internal::IHttpClient::Send(::Unity::Services::Core::Networking::Internal::HttpRequest* request) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::IHttpClient*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::IAsyncOperation_1<::Unity::Services::Core::Networking::Internal::ReadOnlyHttpResponse>*, false>(
      this, ___internal_method, request);
}
