#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/Lambda/zzzz__FunctionResponseType_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::FunctionResponseType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::FunctionResponseType::*)(::StringW)>(&::Amazon::Lambda::FunctionResponseType::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bb5678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::FunctionResponseType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::FunctionResponseType.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::FunctionResponseType* (*)(::StringW)>(&::Amazon::Lambda::FunctionResponseType::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2bb56e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::FunctionResponseType*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::FunctionResponseType.op_Implicit___Amazon__Lambda__FunctionResponseType_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::FunctionResponseType* (*)(::StringW)>(
    &::Amazon::Lambda::FunctionResponseType::op_Implicit___Amazon__Lambda__FunctionResponseType_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bb574c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::FunctionResponseType*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Lambda::FunctionResponseType::setStaticF_ReportBatchItemFailures(::Amazon::Lambda::FunctionResponseType* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::FunctionResponseType*, "ReportBatchItemFailures",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::FunctionResponseType*>::get>(std::forward<::Amazon::Lambda::FunctionResponseType*>(value));
}
inline ::Amazon::Lambda::FunctionResponseType* Amazon::Lambda::FunctionResponseType::getStaticF_ReportBatchItemFailures() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::FunctionResponseType*, "ReportBatchItemFailures",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::FunctionResponseType*>::get>();
}
inline ::Amazon::Lambda::FunctionResponseType* Amazon::Lambda::FunctionResponseType::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::FunctionResponseType*>(value));
}
inline void Amazon::Lambda::FunctionResponseType::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::FunctionResponseType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Lambda::FunctionResponseType* Amazon::Lambda::FunctionResponseType::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::FunctionResponseType*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::FunctionResponseType*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::Lambda::FunctionResponseType* Amazon::Lambda::FunctionResponseType::op_Implicit___Amazon__Lambda__FunctionResponseType_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::FunctionResponseType*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::FunctionResponseType*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::FunctionResponseType::FunctionResponseType() {}
