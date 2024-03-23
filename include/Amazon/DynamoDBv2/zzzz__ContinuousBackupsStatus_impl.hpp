#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__ContinuousBackupsStatus_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::ContinuousBackupsStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::ContinuousBackupsStatus::*)(::StringW)>(
    &::Amazon::DynamoDBv2::ContinuousBackupsStatus::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1210bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContinuousBackupsStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ContinuousBackupsStatus.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ContinuousBackupsStatus* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::ContinuousBackupsStatus::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1210c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContinuousBackupsStatus*>::get(), "FindValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ContinuousBackupsStatus.op_Implicit___Amazon__DynamoDBv2__ContinuousBackupsStatus_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ContinuousBackupsStatus* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::ContinuousBackupsStatus::op_Implicit___Amazon__DynamoDBv2__ContinuousBackupsStatus_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1210c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContinuousBackupsStatus*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::ContinuousBackupsStatus::setStaticF_DISABLED(::Amazon::DynamoDBv2::ContinuousBackupsStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ContinuousBackupsStatus*, "DISABLED",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContinuousBackupsStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::ContinuousBackupsStatus*>(value));
}
inline ::Amazon::DynamoDBv2::ContinuousBackupsStatus* Amazon::DynamoDBv2::ContinuousBackupsStatus::getStaticF_DISABLED() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ContinuousBackupsStatus*, "DISABLED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContinuousBackupsStatus*>::get>();
}
inline void Amazon::DynamoDBv2::ContinuousBackupsStatus::setStaticF_ENABLED(::Amazon::DynamoDBv2::ContinuousBackupsStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ContinuousBackupsStatus*, "ENABLED",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContinuousBackupsStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::ContinuousBackupsStatus*>(value));
}
inline ::Amazon::DynamoDBv2::ContinuousBackupsStatus* Amazon::DynamoDBv2::ContinuousBackupsStatus::getStaticF_ENABLED() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ContinuousBackupsStatus*, "ENABLED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContinuousBackupsStatus*>::get>();
}
inline ::Amazon::DynamoDBv2::ContinuousBackupsStatus* Amazon::DynamoDBv2::ContinuousBackupsStatus::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::ContinuousBackupsStatus*>(value));
}
inline void Amazon::DynamoDBv2::ContinuousBackupsStatus::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContinuousBackupsStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ContinuousBackupsStatus* Amazon::DynamoDBv2::ContinuousBackupsStatus::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContinuousBackupsStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ContinuousBackupsStatus*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ContinuousBackupsStatus* Amazon::DynamoDBv2::ContinuousBackupsStatus::op_Implicit___Amazon__DynamoDBv2__ContinuousBackupsStatus_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContinuousBackupsStatus*>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ContinuousBackupsStatus*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::ContinuousBackupsStatus::ContinuousBackupsStatus() {}
