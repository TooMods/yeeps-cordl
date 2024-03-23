#pragma once
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpException_impl.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpException_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpClientResponse_def.hpp"
template <typename T> constexpr T& Unity::Services::Vivox::Mint::Http::HttpException_1<T>::__cordl_internal_get_ActualError() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ActualError;
}
template <typename T> constexpr T const& Unity::Services::Vivox::Mint::Http::HttpException_1<T>::__cordl_internal_get_ActualError() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ActualError;
}
template <typename T> constexpr void Unity::Services::Vivox::Mint::Http::HttpException_1<T>::__cordl_internal_set_ActualError(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ActualError)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::Unity::Services::Vivox::Mint::Http::HttpException_1<T>* Unity::Services::Vivox::Mint::Http::HttpException_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Http::HttpException_1<T>*>());
}
template <typename T> inline void Unity::Services::Vivox::Mint::Http::HttpException_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpException_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::Services::Vivox::Mint::Http::HttpException_1<T>* Unity::Services::Vivox::Mint::Http::HttpException_1<T>::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Http::HttpException_1<T>*>(message));
}
template <typename T> inline void Unity::Services::Vivox::Mint::Http::HttpException_1<T>::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpException_1<T>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename T> inline ::Unity::Services::Vivox::Mint::Http::HttpException_1<T>* Unity::Services::Vivox::Mint::Http::HttpException_1<T>::New_ctor(::StringW message, ::System::Exception* inner) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Http::HttpException_1<T>*>(message, inner));
}
template <typename T> inline void Unity::Services::Vivox::Mint::Http::HttpException_1<T>::_ctor(::StringW message, ::System::Exception* inner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpException_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, inner);
}
template <typename T>
inline ::Unity::Services::Vivox::Mint::Http::HttpException_1<T>* Unity::Services::Vivox::Mint::Http::HttpException_1<T>::New_ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response,
                                                                                                                                  T actualError) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Http::HttpException_1<T>*>(response, actualError));
}
template <typename T> inline void Unity::Services::Vivox::Mint::Http::HttpException_1<T>::_ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response, T actualError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Http::HttpException_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Http::HttpClientResponse*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, response, actualError);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Vivox::Mint::Http::HttpException_1<T>::HttpException_1() {}
