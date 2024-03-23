#pragma once
#include "Amazon/Runtime/Internal/zzzz__DefaultRetryPolicy_impl.hpp"
#include "Amazon/DynamoDBv2/Internal/zzzz__DynamoDBRetryPolicy_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
#include "Amazon/Runtime/zzzz__IExecutionContext_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy::*)(::Amazon::Runtime::IClientConfig*)>(
    &::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x1745250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy.WaitBeforeRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy::WaitBeforeRetry)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x17453e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy.pauseExponentially
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy::*)(int32_t)>(
    &::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy::pauseExponentially)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x174550c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy*>::get(), "pauseExponentially",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy* Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy::New_ctor(::Amazon::Runtime::IClientConfig* config) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy*>(config));
}
inline void Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy::_ctor(::Amazon::Runtime::IClientConfig* config) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config);
}
inline void Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy::WaitBeforeRetry(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext);
}
inline void Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy::pauseExponentially(int32_t retries) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy*>::get(), "pauseExponentially",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, retries);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Internal::DynamoDBRetryPolicy::DynamoDBRetryPolicy() {}
