#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__ConditionalOperator_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::ConditionalOperator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::ConditionalOperator::*)(::StringW)>(&::Amazon::DynamoDBv2::ConditionalOperator::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x12109d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConditionalOperator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ConditionalOperator.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ConditionalOperator* (*)(::StringW)>(&::Amazon::DynamoDBv2::ConditionalOperator::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1210a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConditionalOperator*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ConditionalOperator.op_Implicit___Amazon__DynamoDBv2__ConditionalOperator_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ConditionalOperator* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::ConditionalOperator::op_Implicit___Amazon__DynamoDBv2__ConditionalOperator_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1210aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConditionalOperator*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::ConditionalOperator::setStaticF_AND(::Amazon::DynamoDBv2::ConditionalOperator* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ConditionalOperator*, "AND", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConditionalOperator*>::get>(
      std::forward<::Amazon::DynamoDBv2::ConditionalOperator*>(value));
}
inline ::Amazon::DynamoDBv2::ConditionalOperator* Amazon::DynamoDBv2::ConditionalOperator::getStaticF_AND() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ConditionalOperator*, "AND",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConditionalOperator*>::get>();
}
inline void Amazon::DynamoDBv2::ConditionalOperator::setStaticF_OR(::Amazon::DynamoDBv2::ConditionalOperator* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ConditionalOperator*, "OR", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConditionalOperator*>::get>(
      std::forward<::Amazon::DynamoDBv2::ConditionalOperator*>(value));
}
inline ::Amazon::DynamoDBv2::ConditionalOperator* Amazon::DynamoDBv2::ConditionalOperator::getStaticF_OR() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ConditionalOperator*, "OR", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConditionalOperator*>::get>();
}
inline ::Amazon::DynamoDBv2::ConditionalOperator* Amazon::DynamoDBv2::ConditionalOperator::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::ConditionalOperator*>(value));
}
inline void Amazon::DynamoDBv2::ConditionalOperator::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConditionalOperator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ConditionalOperator* Amazon::DynamoDBv2::ConditionalOperator::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConditionalOperator*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ConditionalOperator*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ConditionalOperator* Amazon::DynamoDBv2::ConditionalOperator::op_Implicit___Amazon__DynamoDBv2__ConditionalOperator_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ConditionalOperator*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ConditionalOperator*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::ConditionalOperator::ConditionalOperator() {}
