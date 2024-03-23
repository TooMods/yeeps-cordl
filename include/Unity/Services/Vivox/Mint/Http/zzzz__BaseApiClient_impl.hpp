#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__BaseApiClient_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__IHttpClient_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Http::BaseApiClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Http::BaseApiClient::*)(::Unity::Services::Vivox::Mint::Http::IHttpClient*)>(
    &::Unity::Services::Vivox::Mint::Http::BaseApiClient::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x17019fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::BaseApiClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Http::IHttpClient*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Vivox::Mint::Http::IHttpClient*& Unity::Services::Vivox::Mint::Http::BaseApiClient::__cordl_internal_get_HttpClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HttpClient;
}
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Mint::Http::IHttpClient*> const& Unity::Services::Vivox::Mint::Http::BaseApiClient::__cordl_internal_get_HttpClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HttpClient;
}
constexpr void Unity::Services::Vivox::Mint::Http::BaseApiClient::__cordl_internal_set_HttpClient(::Unity::Services::Vivox::Mint::Http::IHttpClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___HttpClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::Mint::Http::BaseApiClient* Unity::Services::Vivox::Mint::Http::BaseApiClient::New_ctor(::Unity::Services::Vivox::Mint::Http::IHttpClient* httpClient) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Http::BaseApiClient*>(httpClient));
}
inline void Unity::Services::Vivox::Mint::Http::BaseApiClient::_ctor(::Unity::Services::Vivox::Mint::Http::IHttpClient* httpClient) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::BaseApiClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Http::IHttpClient*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, httpClient);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Http::BaseApiClient::BaseApiClient() {}
