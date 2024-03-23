#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/Lambda/zzzz__ProvisionedConcurrencyStatusEnum_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::ProvisionedConcurrencyStatusEnum::*)(::StringW)>(
    &::Amazon::Lambda::ProvisionedConcurrencyStatusEnum::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bb64f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* (*)(::StringW)>(
    &::Amazon::Lambda::ProvisionedConcurrencyStatusEnum::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2bb6560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*>::get(), "FindValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum.op_Implicit___Amazon__Lambda__ProvisionedConcurrencyStatusEnum_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* (*)(::StringW)>(
    &::Amazon::Lambda::ProvisionedConcurrencyStatusEnum::op_Implicit___Amazon__Lambda__ProvisionedConcurrencyStatusEnum_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bb65cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Lambda::ProvisionedConcurrencyStatusEnum::setStaticF_FAILED(::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*, "FAILED",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*>::get>(
      std::forward<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*>(value));
}
inline ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* Amazon::Lambda::ProvisionedConcurrencyStatusEnum::getStaticF_FAILED() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*, "FAILED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*>::get>();
}
inline void Amazon::Lambda::ProvisionedConcurrencyStatusEnum::setStaticF_IN_PROGRESS(::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*, "IN_PROGRESS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*>::get>(
      std::forward<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*>(value));
}
inline ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* Amazon::Lambda::ProvisionedConcurrencyStatusEnum::getStaticF_IN_PROGRESS() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*, "IN_PROGRESS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*>::get>();
}
inline void Amazon::Lambda::ProvisionedConcurrencyStatusEnum::setStaticF_READY(::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*, "READY",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*>::get>(
      std::forward<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*>(value));
}
inline ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* Amazon::Lambda::ProvisionedConcurrencyStatusEnum::getStaticF_READY() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*, "READY",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*>::get>();
}
inline ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* Amazon::Lambda::ProvisionedConcurrencyStatusEnum::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*>(value));
}
inline void Amazon::Lambda::ProvisionedConcurrencyStatusEnum::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* Amazon::Lambda::ProvisionedConcurrencyStatusEnum::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*>::get(), "FindValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum* Amazon::Lambda::ProvisionedConcurrencyStatusEnum::op_Implicit___Amazon__Lambda__ProvisionedConcurrencyStatusEnum_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::ProvisionedConcurrencyStatusEnum*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::ProvisionedConcurrencyStatusEnum::ProvisionedConcurrencyStatusEnum() {}
