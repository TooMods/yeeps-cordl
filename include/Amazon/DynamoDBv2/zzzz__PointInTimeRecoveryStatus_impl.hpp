#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__PointInTimeRecoveryStatus_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::PointInTimeRecoveryStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::PointInTimeRecoveryStatus::*)(::StringW)>(
    &::Amazon::DynamoDBv2::PointInTimeRecoveryStatus::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1211e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::PointInTimeRecoveryStatus.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::PointInTimeRecoveryStatus::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1211ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*>::get(), "FindValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::PointInTimeRecoveryStatus.op_Implicit___Amazon__DynamoDBv2__PointInTimeRecoveryStatus_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::PointInTimeRecoveryStatus::op_Implicit___Amazon__DynamoDBv2__PointInTimeRecoveryStatus_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1211f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::PointInTimeRecoveryStatus::setStaticF_DISABLED(::Amazon::DynamoDBv2::PointInTimeRecoveryStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*, "DISABLED",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*>(value));
}
inline ::Amazon::DynamoDBv2::PointInTimeRecoveryStatus* Amazon::DynamoDBv2::PointInTimeRecoveryStatus::getStaticF_DISABLED() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*, "DISABLED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*>::get>();
}
inline void Amazon::DynamoDBv2::PointInTimeRecoveryStatus::setStaticF_ENABLED(::Amazon::DynamoDBv2::PointInTimeRecoveryStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*, "ENABLED",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*>(value));
}
inline ::Amazon::DynamoDBv2::PointInTimeRecoveryStatus* Amazon::DynamoDBv2::PointInTimeRecoveryStatus::getStaticF_ENABLED() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*, "ENABLED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*>::get>();
}
inline ::Amazon::DynamoDBv2::PointInTimeRecoveryStatus* Amazon::DynamoDBv2::PointInTimeRecoveryStatus::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*>(value));
}
inline void Amazon::DynamoDBv2::PointInTimeRecoveryStatus::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::PointInTimeRecoveryStatus* Amazon::DynamoDBv2::PointInTimeRecoveryStatus::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*>::get(), "FindValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::PointInTimeRecoveryStatus* Amazon::DynamoDBv2::PointInTimeRecoveryStatus::op_Implicit___Amazon__DynamoDBv2__PointInTimeRecoveryStatus_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::PointInTimeRecoveryStatus*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::PointInTimeRecoveryStatus::PointInTimeRecoveryStatus() {}
