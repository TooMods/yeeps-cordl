#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/Lambda/zzzz__ThrottleReason_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::ThrottleReason._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::ThrottleReason::*)(::StringW)>(&::Amazon::Lambda::ThrottleReason::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bb7650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ThrottleReason*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::ThrottleReason.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::ThrottleReason* (*)(::StringW)>(&::Amazon::Lambda::ThrottleReason::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2bb76b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ThrottleReason*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::ThrottleReason.op_Implicit___Amazon__Lambda__ThrottleReason_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::ThrottleReason* (*)(::StringW)>(
    &::Amazon::Lambda::ThrottleReason::op_Implicit___Amazon__Lambda__ThrottleReason_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bb7724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ThrottleReason*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Lambda::ThrottleReason::setStaticF_CallerRateLimitExceeded(::Amazon::Lambda::ThrottleReason* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::ThrottleReason*, "CallerRateLimitExceeded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ThrottleReason*>::get>(
      std::forward<::Amazon::Lambda::ThrottleReason*>(value));
}
inline ::Amazon::Lambda::ThrottleReason* Amazon::Lambda::ThrottleReason::getStaticF_CallerRateLimitExceeded() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::ThrottleReason*, "CallerRateLimitExceeded",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ThrottleReason*>::get>();
}
inline void Amazon::Lambda::ThrottleReason::setStaticF_ConcurrentInvocationLimitExceeded(::Amazon::Lambda::ThrottleReason* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::ThrottleReason*, "ConcurrentInvocationLimitExceeded",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ThrottleReason*>::get>(std::forward<::Amazon::Lambda::ThrottleReason*>(value));
}
inline ::Amazon::Lambda::ThrottleReason* Amazon::Lambda::ThrottleReason::getStaticF_ConcurrentInvocationLimitExceeded() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::ThrottleReason*, "ConcurrentInvocationLimitExceeded",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ThrottleReason*>::get>();
}
inline void Amazon::Lambda::ThrottleReason::setStaticF_FunctionInvocationRateLimitExceeded(::Amazon::Lambda::ThrottleReason* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::ThrottleReason*, "FunctionInvocationRateLimitExceeded",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ThrottleReason*>::get>(std::forward<::Amazon::Lambda::ThrottleReason*>(value));
}
inline ::Amazon::Lambda::ThrottleReason* Amazon::Lambda::ThrottleReason::getStaticF_FunctionInvocationRateLimitExceeded() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::ThrottleReason*, "FunctionInvocationRateLimitExceeded",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ThrottleReason*>::get>();
}
inline void Amazon::Lambda::ThrottleReason::setStaticF_ReservedFunctionConcurrentInvocationLimitExceeded(::Amazon::Lambda::ThrottleReason* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::ThrottleReason*, "ReservedFunctionConcurrentInvocationLimitExceeded",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ThrottleReason*>::get>(std::forward<::Amazon::Lambda::ThrottleReason*>(value));
}
inline ::Amazon::Lambda::ThrottleReason* Amazon::Lambda::ThrottleReason::getStaticF_ReservedFunctionConcurrentInvocationLimitExceeded() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::ThrottleReason*, "ReservedFunctionConcurrentInvocationLimitExceeded",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ThrottleReason*>::get>();
}
inline void Amazon::Lambda::ThrottleReason::setStaticF_ReservedFunctionInvocationRateLimitExceeded(::Amazon::Lambda::ThrottleReason* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::ThrottleReason*, "ReservedFunctionInvocationRateLimitExceeded",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ThrottleReason*>::get>(std::forward<::Amazon::Lambda::ThrottleReason*>(value));
}
inline ::Amazon::Lambda::ThrottleReason* Amazon::Lambda::ThrottleReason::getStaticF_ReservedFunctionInvocationRateLimitExceeded() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::ThrottleReason*, "ReservedFunctionInvocationRateLimitExceeded",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ThrottleReason*>::get>();
}
inline ::Amazon::Lambda::ThrottleReason* Amazon::Lambda::ThrottleReason::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::ThrottleReason*>(value));
}
inline void Amazon::Lambda::ThrottleReason::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ThrottleReason*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Lambda::ThrottleReason* Amazon::Lambda::ThrottleReason::FindValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ThrottleReason*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::ThrottleReason*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::Lambda::ThrottleReason* Amazon::Lambda::ThrottleReason::op_Implicit___Amazon__Lambda__ThrottleReason_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ThrottleReason*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::ThrottleReason*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::ThrottleReason::ThrottleReason() {}
