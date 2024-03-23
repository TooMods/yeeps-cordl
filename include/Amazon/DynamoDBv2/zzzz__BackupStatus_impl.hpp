#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__BackupStatus_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::BackupStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::BackupStatus::*)(::StringW)>(&::Amazon::DynamoDBv2::BackupStatus::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x120f9e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::BackupStatus.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::BackupStatus* (*)(::StringW)>(&::Amazon::DynamoDBv2::BackupStatus::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x120fa4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::BackupStatus.op_Implicit___Amazon__DynamoDBv2__BackupStatus_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::BackupStatus* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::BackupStatus::op_Implicit___Amazon__DynamoDBv2__BackupStatus_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x120fab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupStatus*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::BackupStatus::setStaticF_AVAILABLE(::Amazon::DynamoDBv2::BackupStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BackupStatus*, "AVAILABLE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::BackupStatus*>(value));
}
inline ::Amazon::DynamoDBv2::BackupStatus* Amazon::DynamoDBv2::BackupStatus::getStaticF_AVAILABLE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BackupStatus*, "AVAILABLE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupStatus*>::get>();
}
inline void Amazon::DynamoDBv2::BackupStatus::setStaticF_CREATING(::Amazon::DynamoDBv2::BackupStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BackupStatus*, "CREATING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::BackupStatus*>(value));
}
inline ::Amazon::DynamoDBv2::BackupStatus* Amazon::DynamoDBv2::BackupStatus::getStaticF_CREATING() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BackupStatus*, "CREATING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupStatus*>::get>();
}
inline void Amazon::DynamoDBv2::BackupStatus::setStaticF_DELETED(::Amazon::DynamoDBv2::BackupStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BackupStatus*, "DELETED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::BackupStatus*>(value));
}
inline ::Amazon::DynamoDBv2::BackupStatus* Amazon::DynamoDBv2::BackupStatus::getStaticF_DELETED() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BackupStatus*, "DELETED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupStatus*>::get>();
}
inline ::Amazon::DynamoDBv2::BackupStatus* Amazon::DynamoDBv2::BackupStatus::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::BackupStatus*>(value));
}
inline void Amazon::DynamoDBv2::BackupStatus::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::BackupStatus* Amazon::DynamoDBv2::BackupStatus::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::BackupStatus*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::BackupStatus* Amazon::DynamoDBv2::BackupStatus::op_Implicit___Amazon__DynamoDBv2__BackupStatus_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BackupStatus*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::BackupStatus*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::BackupStatus::BackupStatus() {}
