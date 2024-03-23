#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__GetFunctionConcurrencyResponse_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConcurrencyResponse.get_ReservedConcurrentExecutions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Lambda::Model::GetFunctionConcurrencyResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConcurrencyResponse::get_ReservedConcurrentExecutions)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bca8c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConcurrencyResponse*>::get(),
                                                 "get_ReservedConcurrentExecutions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConcurrencyResponse.set_ReservedConcurrentExecutions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConcurrencyResponse::*)(int32_t)>(
    &::Amazon::Lambda::Model::GetFunctionConcurrencyResponse::set_ReservedConcurrentExecutions)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bca8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConcurrencyResponse*>::get(), "set_ReservedConcurrentExecutions",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConcurrencyResponse.IsSetReservedConcurrentExecutions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionConcurrencyResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConcurrencyResponse::IsSetReservedConcurrentExecutions)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bca964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConcurrencyResponse*>::get(),
                                                 "IsSetReservedConcurrentExecutions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionConcurrencyResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionConcurrencyResponse::*)()>(
    &::Amazon::Lambda::Model::GetFunctionConcurrencyResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bca9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConcurrencyResponse*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<int32_t>& Amazon::Lambda::Model::GetFunctionConcurrencyResponse::__cordl_internal_get__reservedConcurrentExecutions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reservedConcurrentExecutions;
}
constexpr ::System::Nullable_1<int32_t> const& Amazon::Lambda::Model::GetFunctionConcurrencyResponse::__cordl_internal_get__reservedConcurrentExecutions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reservedConcurrentExecutions;
}
constexpr void Amazon::Lambda::Model::GetFunctionConcurrencyResponse::__cordl_internal_set__reservedConcurrentExecutions(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reservedConcurrentExecutions = value;
}
inline int32_t Amazon::Lambda::Model::GetFunctionConcurrencyResponse::get_ReservedConcurrentExecutions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConcurrencyResponse*>::get(),
                                                                             "get_ReservedConcurrentExecutions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionConcurrencyResponse::set_ReservedConcurrentExecutions(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConcurrencyResponse*>::get(), "set_ReservedConcurrentExecutions",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionConcurrencyResponse::IsSetReservedConcurrentExecutions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConcurrencyResponse*>::get(),
                                               "IsSetReservedConcurrentExecutions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::GetFunctionConcurrencyResponse* Amazon::Lambda::Model::GetFunctionConcurrencyResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::GetFunctionConcurrencyResponse*>());
}
inline void Amazon::Lambda::Model::GetFunctionConcurrencyResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionConcurrencyResponse*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::GetFunctionConcurrencyResponse::GetFunctionConcurrencyResponse() {}
