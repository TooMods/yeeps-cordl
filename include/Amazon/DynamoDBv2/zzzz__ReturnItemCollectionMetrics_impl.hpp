#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__ReturnItemCollectionMetrics_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::ReturnItemCollectionMetrics::*)(::StringW)>(
    &::Amazon::DynamoDBv2::ReturnItemCollectionMetrics::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x121274c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::ReturnItemCollectionMetrics::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x12127b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>::get(), "FindValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics.op_Implicit___Amazon__DynamoDBv2__ReturnItemCollectionMetrics_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::ReturnItemCollectionMetrics::op_Implicit___Amazon__DynamoDBv2__ReturnItemCollectionMetrics_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1212820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::ReturnItemCollectionMetrics::setStaticF_NONE(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*, "NONE",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>::get>(
      std::forward<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>(value));
}
inline ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* Amazon::DynamoDBv2::ReturnItemCollectionMetrics::getStaticF_NONE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*, "NONE",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>::get>();
}
inline void Amazon::DynamoDBv2::ReturnItemCollectionMetrics::setStaticF_SIZE(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*, "SIZE",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>::get>(
      std::forward<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>(value));
}
inline ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* Amazon::DynamoDBv2::ReturnItemCollectionMetrics::getStaticF_SIZE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*, "SIZE",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>::get>();
}
inline ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* Amazon::DynamoDBv2::ReturnItemCollectionMetrics::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>(value));
}
inline void Amazon::DynamoDBv2::ReturnItemCollectionMetrics::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* Amazon::DynamoDBv2::ReturnItemCollectionMetrics::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>::get(), "FindValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* Amazon::DynamoDBv2::ReturnItemCollectionMetrics::op_Implicit___Amazon__DynamoDBv2__ReturnItemCollectionMetrics_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics::ReturnItemCollectionMetrics() {}
