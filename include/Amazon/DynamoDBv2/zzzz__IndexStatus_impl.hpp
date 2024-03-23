#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__IndexStatus_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::IndexStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::IndexStatus::*)(::StringW)>(&::Amazon::DynamoDBv2::IndexStatus::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1211a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::IndexStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::IndexStatus.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::IndexStatus* (*)(::StringW)>(&::Amazon::DynamoDBv2::IndexStatus::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1211ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::IndexStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::IndexStatus.op_Implicit___Amazon__DynamoDBv2__IndexStatus_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::IndexStatus* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::IndexStatus::op_Implicit___Amazon__DynamoDBv2__IndexStatus_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1211b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::IndexStatus*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::IndexStatus::setStaticF_ACTIVE(::Amazon::DynamoDBv2::IndexStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::IndexStatus*, "ACTIVE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::IndexStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::IndexStatus*>(value));
}
inline ::Amazon::DynamoDBv2::IndexStatus* Amazon::DynamoDBv2::IndexStatus::getStaticF_ACTIVE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::IndexStatus*, "ACTIVE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::IndexStatus*>::get>();
}
inline void Amazon::DynamoDBv2::IndexStatus::setStaticF_CREATING(::Amazon::DynamoDBv2::IndexStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::IndexStatus*, "CREATING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::IndexStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::IndexStatus*>(value));
}
inline ::Amazon::DynamoDBv2::IndexStatus* Amazon::DynamoDBv2::IndexStatus::getStaticF_CREATING() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::IndexStatus*, "CREATING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::IndexStatus*>::get>();
}
inline void Amazon::DynamoDBv2::IndexStatus::setStaticF_DELETING(::Amazon::DynamoDBv2::IndexStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::IndexStatus*, "DELETING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::IndexStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::IndexStatus*>(value));
}
inline ::Amazon::DynamoDBv2::IndexStatus* Amazon::DynamoDBv2::IndexStatus::getStaticF_DELETING() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::IndexStatus*, "DELETING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::IndexStatus*>::get>();
}
inline void Amazon::DynamoDBv2::IndexStatus::setStaticF_UPDATING(::Amazon::DynamoDBv2::IndexStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::IndexStatus*, "UPDATING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::IndexStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::IndexStatus*>(value));
}
inline ::Amazon::DynamoDBv2::IndexStatus* Amazon::DynamoDBv2::IndexStatus::getStaticF_UPDATING() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::IndexStatus*, "UPDATING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::IndexStatus*>::get>();
}
inline ::Amazon::DynamoDBv2::IndexStatus* Amazon::DynamoDBv2::IndexStatus::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::IndexStatus*>(value));
}
inline void Amazon::DynamoDBv2::IndexStatus::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::IndexStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::IndexStatus* Amazon::DynamoDBv2::IndexStatus::FindValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::IndexStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::IndexStatus*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::IndexStatus* Amazon::DynamoDBv2::IndexStatus::op_Implicit___Amazon__DynamoDBv2__IndexStatus_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::IndexStatus*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::IndexStatus*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::IndexStatus::IndexStatus() {}
