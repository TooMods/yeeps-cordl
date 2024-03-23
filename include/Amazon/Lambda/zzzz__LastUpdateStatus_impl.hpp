#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/Lambda/zzzz__LastUpdateStatus_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::LastUpdateStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::LastUpdateStatus::*)(::StringW)>(&::Amazon::Lambda::LastUpdateStatus::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bb5bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::LastUpdateStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::LastUpdateStatus.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::LastUpdateStatus* (*)(::StringW)>(&::Amazon::Lambda::LastUpdateStatus::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2bb5c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::LastUpdateStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::LastUpdateStatus.op_Implicit___Amazon__Lambda__LastUpdateStatus_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::LastUpdateStatus* (*)(::StringW)>(
    &::Amazon::Lambda::LastUpdateStatus::op_Implicit___Amazon__Lambda__LastUpdateStatus_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bb5c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::LastUpdateStatus*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Lambda::LastUpdateStatus::setStaticF_Failed(::Amazon::Lambda::LastUpdateStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::LastUpdateStatus*, "Failed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::LastUpdateStatus*>::get>(
      std::forward<::Amazon::Lambda::LastUpdateStatus*>(value));
}
inline ::Amazon::Lambda::LastUpdateStatus* Amazon::Lambda::LastUpdateStatus::getStaticF_Failed() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::LastUpdateStatus*, "Failed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::LastUpdateStatus*>::get>();
}
inline void Amazon::Lambda::LastUpdateStatus::setStaticF_InProgress(::Amazon::Lambda::LastUpdateStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::LastUpdateStatus*, "InProgress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::LastUpdateStatus*>::get>(
      std::forward<::Amazon::Lambda::LastUpdateStatus*>(value));
}
inline ::Amazon::Lambda::LastUpdateStatus* Amazon::Lambda::LastUpdateStatus::getStaticF_InProgress() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::LastUpdateStatus*, "InProgress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::LastUpdateStatus*>::get>();
}
inline void Amazon::Lambda::LastUpdateStatus::setStaticF_Successful(::Amazon::Lambda::LastUpdateStatus* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::LastUpdateStatus*, "Successful", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::LastUpdateStatus*>::get>(
      std::forward<::Amazon::Lambda::LastUpdateStatus*>(value));
}
inline ::Amazon::Lambda::LastUpdateStatus* Amazon::Lambda::LastUpdateStatus::getStaticF_Successful() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::LastUpdateStatus*, "Successful", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::LastUpdateStatus*>::get>();
}
inline ::Amazon::Lambda::LastUpdateStatus* Amazon::Lambda::LastUpdateStatus::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::LastUpdateStatus*>(value));
}
inline void Amazon::Lambda::LastUpdateStatus::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::LastUpdateStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Lambda::LastUpdateStatus* Amazon::Lambda::LastUpdateStatus::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::LastUpdateStatus*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::LastUpdateStatus*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::Lambda::LastUpdateStatus* Amazon::Lambda::LastUpdateStatus::op_Implicit___Amazon__Lambda__LastUpdateStatus_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::LastUpdateStatus*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::LastUpdateStatus*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::LastUpdateStatus::LastUpdateStatus() {}
