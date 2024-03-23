#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__ReturnConsumedCapacity_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::ReturnConsumedCapacity._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::ReturnConsumedCapacity::*)(::StringW)>(
    &::Amazon::DynamoDBv2::ReturnConsumedCapacity::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1212540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ReturnConsumedCapacity.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ReturnConsumedCapacity* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::ReturnConsumedCapacity::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x12125a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ReturnConsumedCapacity.op_Implicit___Amazon__DynamoDBv2__ReturnConsumedCapacity_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ReturnConsumedCapacity* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::ReturnConsumedCapacity::op_Implicit___Amazon__DynamoDBv2__ReturnConsumedCapacity_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1212614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::ReturnConsumedCapacity::setStaticF_INDEXES(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ReturnConsumedCapacity*, "INDEXES",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get>(
      std::forward<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>(value));
}
inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* Amazon::DynamoDBv2::ReturnConsumedCapacity::getStaticF_INDEXES() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ReturnConsumedCapacity*, "INDEXES",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get>();
}
inline void Amazon::DynamoDBv2::ReturnConsumedCapacity::setStaticF_NONE(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ReturnConsumedCapacity*, "NONE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get>(
      std::forward<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>(value));
}
inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* Amazon::DynamoDBv2::ReturnConsumedCapacity::getStaticF_NONE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ReturnConsumedCapacity*, "NONE",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get>();
}
inline void Amazon::DynamoDBv2::ReturnConsumedCapacity::setStaticF_TOTAL(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ReturnConsumedCapacity*, "TOTAL", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get>(
      std::forward<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>(value));
}
inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* Amazon::DynamoDBv2::ReturnConsumedCapacity::getStaticF_TOTAL() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ReturnConsumedCapacity*, "TOTAL",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get>();
}
inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* Amazon::DynamoDBv2::ReturnConsumedCapacity::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>(value));
}
inline void Amazon::DynamoDBv2::ReturnConsumedCapacity::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* Amazon::DynamoDBv2::ReturnConsumedCapacity::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ReturnConsumedCapacity*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* Amazon::DynamoDBv2::ReturnConsumedCapacity::op_Implicit___Amazon__DynamoDBv2__ReturnConsumedCapacity_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ReturnConsumedCapacity*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::ReturnConsumedCapacity::ReturnConsumedCapacity() {}
