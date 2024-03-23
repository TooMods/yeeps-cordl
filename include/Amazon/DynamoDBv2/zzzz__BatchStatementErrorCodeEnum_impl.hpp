#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__BatchStatementErrorCodeEnum_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::*)(::StringW)>(
    &::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x121003c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x12100a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get(), "FindValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum.op_Implicit___Amazon__DynamoDBv2__BatchStatementErrorCodeEnum_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::op_Implicit___Amazon__DynamoDBv2__BatchStatementErrorCodeEnum_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1210110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::setStaticF_AccessDenied(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "AccessDenied",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>(
      std::forward<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>(value));
}
inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::getStaticF_AccessDenied() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "AccessDenied",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>();
}
inline void Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::setStaticF_ConditionalCheckFailed(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "ConditionalCheckFailed",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>(
      std::forward<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>(value));
}
inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::getStaticF_ConditionalCheckFailed() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "ConditionalCheckFailed",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>();
}
inline void Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::setStaticF_DuplicateItem(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "DuplicateItem",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>(
      std::forward<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>(value));
}
inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::getStaticF_DuplicateItem() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "DuplicateItem",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>();
}
inline void Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::setStaticF_InternalServerError(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "InternalServerError",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>(
      std::forward<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>(value));
}
inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::getStaticF_InternalServerError() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "InternalServerError",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>();
}
inline void Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::setStaticF_ItemCollectionSizeLimitExceeded(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "ItemCollectionSizeLimitExceeded",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>(
      std::forward<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>(value));
}
inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::getStaticF_ItemCollectionSizeLimitExceeded() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "ItemCollectionSizeLimitExceeded",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>();
}
inline void Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::setStaticF_ProvisionedThroughputExceeded(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "ProvisionedThroughputExceeded",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>(
      std::forward<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>(value));
}
inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::getStaticF_ProvisionedThroughputExceeded() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "ProvisionedThroughputExceeded",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>();
}
inline void Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::setStaticF_RequestLimitExceeded(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "RequestLimitExceeded",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>(
      std::forward<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>(value));
}
inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::getStaticF_RequestLimitExceeded() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "RequestLimitExceeded",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>();
}
inline void Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::setStaticF_ResourceNotFound(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "ResourceNotFound",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>(
      std::forward<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>(value));
}
inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::getStaticF_ResourceNotFound() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "ResourceNotFound",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>();
}
inline void Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::setStaticF_ThrottlingError(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "ThrottlingError",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>(
      std::forward<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>(value));
}
inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::getStaticF_ThrottlingError() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "ThrottlingError",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>();
}
inline void Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::setStaticF_TransactionConflict(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "TransactionConflict",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>(
      std::forward<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>(value));
}
inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::getStaticF_TransactionConflict() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "TransactionConflict",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>();
}
inline void Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::setStaticF_ValidationError(::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "ValidationError",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>(
      std::forward<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>(value));
}
inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::getStaticF_ValidationError() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, "ValidationError",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get>();
}
inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>(value));
}
inline void Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get(), "FindValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum* Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::op_Implicit___Amazon__DynamoDBv2__BatchStatementErrorCodeEnum_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::BatchStatementErrorCodeEnum::BatchStatementErrorCodeEnum() {}
