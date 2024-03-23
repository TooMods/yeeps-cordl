#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__ReplicaStatus_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::ReplicaStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::ReplicaStatus::*)(::StringW)>(&::Amazon::DynamoDBv2::ReplicaStatus::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1212264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ReplicaStatus.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ReplicaStatus* (*)(::StringW)>(&::Amazon::DynamoDBv2::ReplicaStatus::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x12122cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ReplicaStatus.op_Implicit___Amazon__DynamoDBv2__ReplicaStatus_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ReplicaStatus* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::ReplicaStatus::op_Implicit___Amazon__DynamoDBv2__ReplicaStatus_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1212338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::ReplicaStatus::setStaticF_ACTIVE(::Amazon::DynamoDBv2::ReplicaStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ReplicaStatus*, "ACTIVE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::ReplicaStatus*>(value));
}
inline ::Amazon::DynamoDBv2::ReplicaStatus* Amazon::DynamoDBv2::ReplicaStatus::getStaticF_ACTIVE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ReplicaStatus*, "ACTIVE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get>();
}
inline void Amazon::DynamoDBv2::ReplicaStatus::setStaticF_CREATING(::Amazon::DynamoDBv2::ReplicaStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ReplicaStatus*, "CREATING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::ReplicaStatus*>(value));
}
inline ::Amazon::DynamoDBv2::ReplicaStatus* Amazon::DynamoDBv2::ReplicaStatus::getStaticF_CREATING() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ReplicaStatus*, "CREATING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get>();
}
inline void Amazon::DynamoDBv2::ReplicaStatus::setStaticF_CREATION_FAILED(::Amazon::DynamoDBv2::ReplicaStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ReplicaStatus*, "CREATION_FAILED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::ReplicaStatus*>(value));
}
inline ::Amazon::DynamoDBv2::ReplicaStatus* Amazon::DynamoDBv2::ReplicaStatus::getStaticF_CREATION_FAILED() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ReplicaStatus*, "CREATION_FAILED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get>();
}
inline void Amazon::DynamoDBv2::ReplicaStatus::setStaticF_DELETING(::Amazon::DynamoDBv2::ReplicaStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ReplicaStatus*, "DELETING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::ReplicaStatus*>(value));
}
inline ::Amazon::DynamoDBv2::ReplicaStatus* Amazon::DynamoDBv2::ReplicaStatus::getStaticF_DELETING() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ReplicaStatus*, "DELETING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get>();
}
inline void Amazon::DynamoDBv2::ReplicaStatus::setStaticF_INACCESSIBLE_ENCRYPTION_CREDENTIALS(::Amazon::DynamoDBv2::ReplicaStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ReplicaStatus*, "INACCESSIBLE_ENCRYPTION_CREDENTIALS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get>(std::forward<::Amazon::DynamoDBv2::ReplicaStatus*>(value));
}
inline ::Amazon::DynamoDBv2::ReplicaStatus* Amazon::DynamoDBv2::ReplicaStatus::getStaticF_INACCESSIBLE_ENCRYPTION_CREDENTIALS() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ReplicaStatus*, "INACCESSIBLE_ENCRYPTION_CREDENTIALS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get>();
}
inline void Amazon::DynamoDBv2::ReplicaStatus::setStaticF_REGION_DISABLED(::Amazon::DynamoDBv2::ReplicaStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ReplicaStatus*, "REGION_DISABLED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::ReplicaStatus*>(value));
}
inline ::Amazon::DynamoDBv2::ReplicaStatus* Amazon::DynamoDBv2::ReplicaStatus::getStaticF_REGION_DISABLED() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ReplicaStatus*, "REGION_DISABLED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get>();
}
inline void Amazon::DynamoDBv2::ReplicaStatus::setStaticF_UPDATING(::Amazon::DynamoDBv2::ReplicaStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ReplicaStatus*, "UPDATING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::ReplicaStatus*>(value));
}
inline ::Amazon::DynamoDBv2::ReplicaStatus* Amazon::DynamoDBv2::ReplicaStatus::getStaticF_UPDATING() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ReplicaStatus*, "UPDATING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get>();
}
inline ::Amazon::DynamoDBv2::ReplicaStatus* Amazon::DynamoDBv2::ReplicaStatus::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::ReplicaStatus*>(value));
}
inline void Amazon::DynamoDBv2::ReplicaStatus::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ReplicaStatus* Amazon::DynamoDBv2::ReplicaStatus::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ReplicaStatus*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ReplicaStatus* Amazon::DynamoDBv2::ReplicaStatus::op_Implicit___Amazon__DynamoDBv2__ReplicaStatus_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ReplicaStatus*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ReplicaStatus*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::ReplicaStatus::ReplicaStatus() {}
