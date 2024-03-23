#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__BillingMode_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::BillingMode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::BillingMode::*)(::StringW)>(&::Amazon::DynamoDBv2::BillingMode::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x12103e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BillingMode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::BillingMode.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::BillingMode* (*)(::StringW)>(&::Amazon::DynamoDBv2::BillingMode::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1210450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BillingMode*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::BillingMode.op_Implicit___Amazon__DynamoDBv2__BillingMode_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::BillingMode* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::BillingMode::op_Implicit___Amazon__DynamoDBv2__BillingMode_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x12104bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BillingMode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::BillingMode::setStaticF_PAY_PER_REQUEST(::Amazon::DynamoDBv2::BillingMode* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BillingMode*, "PAY_PER_REQUEST", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BillingMode*>::get>(
      std::forward<::Amazon::DynamoDBv2::BillingMode*>(value));
}
inline ::Amazon::DynamoDBv2::BillingMode* Amazon::DynamoDBv2::BillingMode::getStaticF_PAY_PER_REQUEST() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BillingMode*, "PAY_PER_REQUEST", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BillingMode*>::get>();
}
inline void Amazon::DynamoDBv2::BillingMode::setStaticF_PROVISIONED(::Amazon::DynamoDBv2::BillingMode* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BillingMode*, "PROVISIONED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BillingMode*>::get>(
      std::forward<::Amazon::DynamoDBv2::BillingMode*>(value));
}
inline ::Amazon::DynamoDBv2::BillingMode* Amazon::DynamoDBv2::BillingMode::getStaticF_PROVISIONED() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BillingMode*, "PROVISIONED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BillingMode*>::get>();
}
inline ::Amazon::DynamoDBv2::BillingMode* Amazon::DynamoDBv2::BillingMode::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::BillingMode*>(value));
}
inline void Amazon::DynamoDBv2::BillingMode::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BillingMode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::BillingMode* Amazon::DynamoDBv2::BillingMode::FindValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BillingMode*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::BillingMode*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::BillingMode* Amazon::DynamoDBv2::BillingMode::op_Implicit___Amazon__DynamoDBv2__BillingMode_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BillingMode*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::BillingMode*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::BillingMode::BillingMode() {}
