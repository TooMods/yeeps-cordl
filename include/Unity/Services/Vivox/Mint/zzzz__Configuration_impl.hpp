#pragma once
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/Mint/zzzz__Configuration_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Configuration._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::Mint::Configuration::*)(
    ::StringW, ::System::Nullable_1<int32_t>, ::System::Nullable_1<int32_t>, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(
    &::Unity::Services::Vivox::Mint::Configuration::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1700bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Configuration*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Configuration.MergeConfigurations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Vivox::Mint::Configuration* (*)(::Unity::Services::Vivox::Mint::Configuration*, ::Unity::Services::Vivox::Mint::Configuration*)>(
        &::Unity::Services::Vivox::Mint::Configuration::MergeConfigurations)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x1700cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Configuration*>::get(), "MergeConfigurations", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Configuration*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Configuration*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Vivox::Mint::Configuration::__cordl_internal_get_BasePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BasePath;
}
constexpr ::StringW const& Unity::Services::Vivox::Mint::Configuration::__cordl_internal_get_BasePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BasePath;
}
constexpr void Unity::Services::Vivox::Mint::Configuration::__cordl_internal_set_BasePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BasePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int32_t>& Unity::Services::Vivox::Mint::Configuration::__cordl_internal_get_RequestTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequestTimeout;
}
constexpr ::System::Nullable_1<int32_t> const& Unity::Services::Vivox::Mint::Configuration::__cordl_internal_get_RequestTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequestTimeout;
}
constexpr void Unity::Services::Vivox::Mint::Configuration::__cordl_internal_set_RequestTimeout(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RequestTimeout = value;
}
constexpr ::System::Nullable_1<int32_t>& Unity::Services::Vivox::Mint::Configuration::__cordl_internal_get_NumberOfRetries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NumberOfRetries;
}
constexpr ::System::Nullable_1<int32_t> const& Unity::Services::Vivox::Mint::Configuration::__cordl_internal_get_NumberOfRetries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NumberOfRetries;
}
constexpr void Unity::Services::Vivox::Mint::Configuration::__cordl_internal_set_NumberOfRetries(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NumberOfRetries = value;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& Unity::Services::Vivox::Mint::Configuration::__cordl_internal_get_Headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Headers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const&
Unity::Services::Vivox::Mint::Configuration::__cordl_internal_get_Headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Headers;
}
constexpr void Unity::Services::Vivox::Mint::Configuration::__cordl_internal_set_Headers(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Vivox::Mint::Configuration* Unity::Services::Vivox::Mint::Configuration::New_ctor(::StringW basePath, ::System::Nullable_1<int32_t> requestTimeout,
                                                                                                            ::System::Nullable_1<int32_t> numRetries,
                                                                                                            ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Configuration*>(basePath, requestTimeout, numRetries, headers));
}
inline void Unity::Services::Vivox::Mint::Configuration::_ctor(::StringW basePath, ::System::Nullable_1<int32_t> requestTimeout, ::System::Nullable_1<int32_t> numRetries,
                                                               ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Configuration*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basePath, requestTimeout, numRetries, headers);
}
inline ::Unity::Services::Vivox::Mint::Configuration* Unity::Services::Vivox::Mint::Configuration::MergeConfigurations(::Unity::Services::Vivox::Mint::Configuration* a,
                                                                                                                       ::Unity::Services::Vivox::Mint::Configuration* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Configuration*>::get(), "MergeConfigurations", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Configuration*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::Configuration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::Configuration*, false>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::Mint::Configuration::Configuration() {}
