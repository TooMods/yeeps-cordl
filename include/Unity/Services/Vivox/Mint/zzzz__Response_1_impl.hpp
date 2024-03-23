#pragma once
#include "Unity/Services/Vivox/Mint/zzzz__Response_impl.hpp"
#include "Unity/Services/Vivox/Mint/zzzz__Response_1_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpClientResponse_def.hpp"
template <typename T> constexpr T& Unity::Services::Vivox::Mint::Response_1<T>::__cordl_internal_get__Result_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Result_k__BackingField;
}
template <typename T> constexpr T const& Unity::Services::Vivox::Mint::Response_1<T>::__cordl_internal_get__Result_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Result_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Vivox::Mint::Response_1<T>::__cordl_internal_set__Result_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Result_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline T Unity::Services::Vivox::Mint::Response_1<T>::get_Result() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Response_1<T>*>::get(),
                                                                             "get_Result", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T>
inline ::Unity::Services::Vivox::Mint::Response_1<T>* Unity::Services::Vivox::Mint::Response_1<T>::New_ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* httpResponse, T result) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Response_1<T>*>(httpResponse, result));
}
template <typename T> inline void Unity::Services::Vivox::Mint::Response_1<T>::_ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* httpResponse, T result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Response_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, httpResponse, result);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Vivox::Mint::Response_1<T>::Response_1() {}
