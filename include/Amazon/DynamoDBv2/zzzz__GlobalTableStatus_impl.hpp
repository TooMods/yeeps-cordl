#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__GlobalTableStatus_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::GlobalTableStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::GlobalTableStatus::*)(::StringW)>(&::Amazon::DynamoDBv2::GlobalTableStatus::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1211828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GlobalTableStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::GlobalTableStatus.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::GlobalTableStatus* (*)(::StringW)>(&::Amazon::DynamoDBv2::GlobalTableStatus::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1211890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GlobalTableStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::GlobalTableStatus.op_Implicit___Amazon__DynamoDBv2__GlobalTableStatus_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::GlobalTableStatus* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::GlobalTableStatus::op_Implicit___Amazon__DynamoDBv2__GlobalTableStatus_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x12118fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GlobalTableStatus*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::GlobalTableStatus::setStaticF_ACTIVE(::Amazon::DynamoDBv2::GlobalTableStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::GlobalTableStatus*, "ACTIVE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GlobalTableStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::GlobalTableStatus*>(value));
}
inline ::Amazon::DynamoDBv2::GlobalTableStatus* Amazon::DynamoDBv2::GlobalTableStatus::getStaticF_ACTIVE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::GlobalTableStatus*, "ACTIVE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GlobalTableStatus*>::get>();
}
inline void Amazon::DynamoDBv2::GlobalTableStatus::setStaticF_CREATING(::Amazon::DynamoDBv2::GlobalTableStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::GlobalTableStatus*, "CREATING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GlobalTableStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::GlobalTableStatus*>(value));
}
inline ::Amazon::DynamoDBv2::GlobalTableStatus* Amazon::DynamoDBv2::GlobalTableStatus::getStaticF_CREATING() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::GlobalTableStatus*, "CREATING",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GlobalTableStatus*>::get>();
}
inline void Amazon::DynamoDBv2::GlobalTableStatus::setStaticF_DELETING(::Amazon::DynamoDBv2::GlobalTableStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::GlobalTableStatus*, "DELETING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GlobalTableStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::GlobalTableStatus*>(value));
}
inline ::Amazon::DynamoDBv2::GlobalTableStatus* Amazon::DynamoDBv2::GlobalTableStatus::getStaticF_DELETING() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::GlobalTableStatus*, "DELETING",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GlobalTableStatus*>::get>();
}
inline void Amazon::DynamoDBv2::GlobalTableStatus::setStaticF_UPDATING(::Amazon::DynamoDBv2::GlobalTableStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::GlobalTableStatus*, "UPDATING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GlobalTableStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::GlobalTableStatus*>(value));
}
inline ::Amazon::DynamoDBv2::GlobalTableStatus* Amazon::DynamoDBv2::GlobalTableStatus::getStaticF_UPDATING() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::GlobalTableStatus*, "UPDATING",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GlobalTableStatus*>::get>();
}
inline ::Amazon::DynamoDBv2::GlobalTableStatus* Amazon::DynamoDBv2::GlobalTableStatus::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::GlobalTableStatus*>(value));
}
inline void Amazon::DynamoDBv2::GlobalTableStatus::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GlobalTableStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::GlobalTableStatus* Amazon::DynamoDBv2::GlobalTableStatus::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GlobalTableStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::GlobalTableStatus*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::GlobalTableStatus* Amazon::DynamoDBv2::GlobalTableStatus::op_Implicit___Amazon__DynamoDBv2__GlobalTableStatus_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::GlobalTableStatus*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::GlobalTableStatus*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::GlobalTableStatus::GlobalTableStatus() {}
