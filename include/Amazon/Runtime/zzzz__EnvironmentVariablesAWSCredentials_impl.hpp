#pragma once
#include "Amazon/Runtime/zzzz__AWSCredentials_impl.hpp"
#include "Amazon/Runtime/zzzz__EnvironmentVariablesAWSCredentials_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Logger_def.hpp"
#include "Amazon/Runtime/zzzz__ImmutableCredentials_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::EnvironmentVariablesAWSCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::EnvironmentVariablesAWSCredentials::*)()>(
    &::Amazon::Runtime::EnvironmentVariablesAWSCredentials::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1fe95c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EnvironmentVariablesAWSCredentials*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EnvironmentVariablesAWSCredentials.FetchCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::ImmutableCredentials* (::Amazon::Runtime::EnvironmentVariablesAWSCredentials::*)()>(
    &::Amazon::Runtime::EnvironmentVariablesAWSCredentials::FetchCredentials)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x1fe9688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EnvironmentVariablesAWSCredentials*>::get(),
                                                                               "FetchCredentials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::EnvironmentVariablesAWSCredentials.GetCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::ImmutableCredentials* (::Amazon::Runtime::EnvironmentVariablesAWSCredentials::*)()>(
    &::Amazon::Runtime::EnvironmentVariablesAWSCredentials::GetCredentials)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fe99cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EnvironmentVariablesAWSCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EnvironmentVariablesAWSCredentials*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::Internal::Util::Logger*& Amazon::Runtime::EnvironmentVariablesAWSCredentials::__cordl_internal_get_logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& Amazon::Runtime::EnvironmentVariablesAWSCredentials::__cordl_internal_get_logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr void Amazon::Runtime::EnvironmentVariablesAWSCredentials::__cordl_internal_set_logger(::Amazon::Runtime::Internal::Util::Logger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::EnvironmentVariablesAWSCredentials* Amazon::Runtime::EnvironmentVariablesAWSCredentials::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::EnvironmentVariablesAWSCredentials*>());
}
inline void Amazon::Runtime::EnvironmentVariablesAWSCredentials::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EnvironmentVariablesAWSCredentials*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::ImmutableCredentials* Amazon::Runtime::EnvironmentVariablesAWSCredentials::FetchCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EnvironmentVariablesAWSCredentials*>::get(),
                                                                             "FetchCredentials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::ImmutableCredentials*, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::ImmutableCredentials* Amazon::Runtime::EnvironmentVariablesAWSCredentials::GetCredentials() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::EnvironmentVariablesAWSCredentials*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::ImmutableCredentials*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::EnvironmentVariablesAWSCredentials::EnvironmentVariablesAWSCredentials() {}
