#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__TableStatus_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::TableStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::TableStatus::*)(::StringW)>(&::Amazon::DynamoDBv2::TableStatus::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1213a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::TableStatus.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::TableStatus* (*)(::StringW)>(&::Amazon::DynamoDBv2::TableStatus::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1213a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::TableStatus.op_Implicit___Amazon__DynamoDBv2__TableStatus_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::TableStatus* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::TableStatus::op_Implicit___Amazon__DynamoDBv2__TableStatus_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1213af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::TableStatus::setStaticF_ACTIVE(::Amazon::DynamoDBv2::TableStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::TableStatus*, "ACTIVE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::TableStatus*>(value));
}
inline ::Amazon::DynamoDBv2::TableStatus* Amazon::DynamoDBv2::TableStatus::getStaticF_ACTIVE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::TableStatus*, "ACTIVE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get>();
}
inline void Amazon::DynamoDBv2::TableStatus::setStaticF_ARCHIVED(::Amazon::DynamoDBv2::TableStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::TableStatus*, "ARCHIVED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::TableStatus*>(value));
}
inline ::Amazon::DynamoDBv2::TableStatus* Amazon::DynamoDBv2::TableStatus::getStaticF_ARCHIVED() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::TableStatus*, "ARCHIVED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get>();
}
inline void Amazon::DynamoDBv2::TableStatus::setStaticF_ARCHIVING(::Amazon::DynamoDBv2::TableStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::TableStatus*, "ARCHIVING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::TableStatus*>(value));
}
inline ::Amazon::DynamoDBv2::TableStatus* Amazon::DynamoDBv2::TableStatus::getStaticF_ARCHIVING() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::TableStatus*, "ARCHIVING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get>();
}
inline void Amazon::DynamoDBv2::TableStatus::setStaticF_CREATING(::Amazon::DynamoDBv2::TableStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::TableStatus*, "CREATING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::TableStatus*>(value));
}
inline ::Amazon::DynamoDBv2::TableStatus* Amazon::DynamoDBv2::TableStatus::getStaticF_CREATING() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::TableStatus*, "CREATING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get>();
}
inline void Amazon::DynamoDBv2::TableStatus::setStaticF_DELETING(::Amazon::DynamoDBv2::TableStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::TableStatus*, "DELETING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::TableStatus*>(value));
}
inline ::Amazon::DynamoDBv2::TableStatus* Amazon::DynamoDBv2::TableStatus::getStaticF_DELETING() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::TableStatus*, "DELETING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get>();
}
inline void Amazon::DynamoDBv2::TableStatus::setStaticF_INACCESSIBLE_ENCRYPTION_CREDENTIALS(::Amazon::DynamoDBv2::TableStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::TableStatus*, "INACCESSIBLE_ENCRYPTION_CREDENTIALS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get>(std::forward<::Amazon::DynamoDBv2::TableStatus*>(value));
}
inline ::Amazon::DynamoDBv2::TableStatus* Amazon::DynamoDBv2::TableStatus::getStaticF_INACCESSIBLE_ENCRYPTION_CREDENTIALS() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::TableStatus*, "INACCESSIBLE_ENCRYPTION_CREDENTIALS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get>();
}
inline void Amazon::DynamoDBv2::TableStatus::setStaticF_UPDATING(::Amazon::DynamoDBv2::TableStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::TableStatus*, "UPDATING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::TableStatus*>(value));
}
inline ::Amazon::DynamoDBv2::TableStatus* Amazon::DynamoDBv2::TableStatus::getStaticF_UPDATING() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::TableStatus*, "UPDATING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get>();
}
inline ::Amazon::DynamoDBv2::TableStatus* Amazon::DynamoDBv2::TableStatus::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::TableStatus*>(value));
}
inline void Amazon::DynamoDBv2::TableStatus::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::TableStatus* Amazon::DynamoDBv2::TableStatus::FindValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::TableStatus*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::TableStatus* Amazon::DynamoDBv2::TableStatus::op_Implicit___Amazon__DynamoDBv2__TableStatus_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::TableStatus*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::TableStatus*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::TableStatus::TableStatus() {}
