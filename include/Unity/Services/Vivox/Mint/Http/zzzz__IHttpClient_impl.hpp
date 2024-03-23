#pragma once
#include "Unity/Services/Vivox/Mint/Http/zzzz__IHttpClient_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpClientResponse_def.hpp"
#include "UnityEngine/Networking/zzzz__IMultipartFormSection_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::IHttpClient.MakeRequestAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>* (
    ::Unity::Services::Vivox::Mint::Http::IHttpClient::*)(::StringW, ::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, int32_t)>(
    &::Unity::Services::Vivox::Mint::Http::IHttpClient::MakeRequestAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::IHttpClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::IHttpClient*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::IHttpClient.MakeRequestAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>* (
    ::Unity::Services::Vivox::Mint::Http::IHttpClient::*)(::StringW, ::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*,
                                                          ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, int32_t, ::StringW)>(
    &::Unity::Services::Vivox::Mint::Http::IHttpClient::MakeRequestAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::IHttpClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::IHttpClient*>::get(), 1));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*
Unity::Services::Vivox::Mint::Http::IHttpClient::MakeRequestAsync(::StringW method, ::StringW url, ::ArrayW<uint8_t, ::Array<uint8_t>*> body,
                                                                  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::IHttpClient*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*, false>(this, ___internal_method, method, url, body,
                                                                                                                                                    headers, requestTimeout);
}
/// @param boundary: ::StringW (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*
Unity::Services::Vivox::Mint::Http::IHttpClient::MakeRequestAsync(::StringW method, ::StringW url, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* body,
                                                                  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, int32_t requestTimeout, ::StringW boundary) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::IHttpClient*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>*, false>(this, ___internal_method, method, url, body,
                                                                                                                                                    headers, requestTimeout, boundary);
}
