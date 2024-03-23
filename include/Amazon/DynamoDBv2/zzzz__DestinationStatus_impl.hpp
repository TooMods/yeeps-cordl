#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__DestinationStatus_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DestinationStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DestinationStatus::*)(::StringW)>(&::Amazon::DynamoDBv2::DestinationStatus::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x12111d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DestinationStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DestinationStatus.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DestinationStatus* (*)(::StringW)>(&::Amazon::DynamoDBv2::DestinationStatus::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1211238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DestinationStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DestinationStatus.op_Implicit___Amazon__DynamoDBv2__DestinationStatus_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DestinationStatus* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::DestinationStatus::op_Implicit___Amazon__DynamoDBv2__DestinationStatus_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x12112a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DestinationStatus*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::DestinationStatus::setStaticF_ACTIVE(::Amazon::DynamoDBv2::DestinationStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DestinationStatus*, "ACTIVE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DestinationStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::DestinationStatus*>(value));
}
inline ::Amazon::DynamoDBv2::DestinationStatus* Amazon::DynamoDBv2::DestinationStatus::getStaticF_ACTIVE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DestinationStatus*, "ACTIVE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DestinationStatus*>::get>();
}
inline void Amazon::DynamoDBv2::DestinationStatus::setStaticF_DISABLED(::Amazon::DynamoDBv2::DestinationStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DestinationStatus*, "DISABLED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DestinationStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::DestinationStatus*>(value));
}
inline ::Amazon::DynamoDBv2::DestinationStatus* Amazon::DynamoDBv2::DestinationStatus::getStaticF_DISABLED() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DestinationStatus*, "DISABLED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DestinationStatus*>::get>();
}
inline void Amazon::DynamoDBv2::DestinationStatus::setStaticF_DISABLING(::Amazon::DynamoDBv2::DestinationStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DestinationStatus*, "DISABLING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DestinationStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::DestinationStatus*>(value));
}
inline ::Amazon::DynamoDBv2::DestinationStatus* Amazon::DynamoDBv2::DestinationStatus::getStaticF_DISABLING() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DestinationStatus*, "DISABLING",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DestinationStatus*>::get>();
}
inline void Amazon::DynamoDBv2::DestinationStatus::setStaticF_ENABLE_FAILED(::Amazon::DynamoDBv2::DestinationStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DestinationStatus*, "ENABLE_FAILED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DestinationStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::DestinationStatus*>(value));
}
inline ::Amazon::DynamoDBv2::DestinationStatus* Amazon::DynamoDBv2::DestinationStatus::getStaticF_ENABLE_FAILED() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DestinationStatus*, "ENABLE_FAILED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DestinationStatus*>::get>();
}
inline void Amazon::DynamoDBv2::DestinationStatus::setStaticF_ENABLING(::Amazon::DynamoDBv2::DestinationStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DestinationStatus*, "ENABLING", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DestinationStatus*>::get>(
      std::forward<::Amazon::DynamoDBv2::DestinationStatus*>(value));
}
inline ::Amazon::DynamoDBv2::DestinationStatus* Amazon::DynamoDBv2::DestinationStatus::getStaticF_ENABLING() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DestinationStatus*, "ENABLING",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DestinationStatus*>::get>();
}
inline ::Amazon::DynamoDBv2::DestinationStatus* Amazon::DynamoDBv2::DestinationStatus::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DestinationStatus*>(value));
}
inline void Amazon::DynamoDBv2::DestinationStatus::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DestinationStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DestinationStatus* Amazon::DynamoDBv2::DestinationStatus::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DestinationStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DestinationStatus*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DestinationStatus* Amazon::DynamoDBv2::DestinationStatus::op_Implicit___Amazon__DynamoDBv2__DestinationStatus_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DestinationStatus*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DestinationStatus*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DestinationStatus::DestinationStatus() {}
