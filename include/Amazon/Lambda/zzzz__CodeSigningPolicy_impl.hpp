#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/Lambda/zzzz__CodeSigningPolicy_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::CodeSigningPolicy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::CodeSigningPolicy::*)(::StringW)>(&::Amazon::Lambda::CodeSigningPolicy::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bb50f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::CodeSigningPolicy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::CodeSigningPolicy.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::CodeSigningPolicy* (*)(::StringW)>(&::Amazon::Lambda::CodeSigningPolicy::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2bb515c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::CodeSigningPolicy*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::CodeSigningPolicy.op_Implicit___Amazon__Lambda__CodeSigningPolicy_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::CodeSigningPolicy* (*)(::StringW)>(
    &::Amazon::Lambda::CodeSigningPolicy::op_Implicit___Amazon__Lambda__CodeSigningPolicy_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bb51c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::CodeSigningPolicy*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Lambda::CodeSigningPolicy::setStaticF_Enforce(::Amazon::Lambda::CodeSigningPolicy* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::CodeSigningPolicy*, "Enforce", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::CodeSigningPolicy*>::get>(
      std::forward<::Amazon::Lambda::CodeSigningPolicy*>(value));
}
inline ::Amazon::Lambda::CodeSigningPolicy* Amazon::Lambda::CodeSigningPolicy::getStaticF_Enforce() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::CodeSigningPolicy*, "Enforce", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::CodeSigningPolicy*>::get>();
}
inline void Amazon::Lambda::CodeSigningPolicy::setStaticF_Warn(::Amazon::Lambda::CodeSigningPolicy* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::CodeSigningPolicy*, "Warn", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::CodeSigningPolicy*>::get>(
      std::forward<::Amazon::Lambda::CodeSigningPolicy*>(value));
}
inline ::Amazon::Lambda::CodeSigningPolicy* Amazon::Lambda::CodeSigningPolicy::getStaticF_Warn() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::CodeSigningPolicy*, "Warn", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::CodeSigningPolicy*>::get>();
}
inline ::Amazon::Lambda::CodeSigningPolicy* Amazon::Lambda::CodeSigningPolicy::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::CodeSigningPolicy*>(value));
}
inline void Amazon::Lambda::CodeSigningPolicy::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::CodeSigningPolicy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Lambda::CodeSigningPolicy* Amazon::Lambda::CodeSigningPolicy::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::CodeSigningPolicy*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::CodeSigningPolicy*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::Lambda::CodeSigningPolicy* Amazon::Lambda::CodeSigningPolicy::op_Implicit___Amazon__Lambda__CodeSigningPolicy_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::CodeSigningPolicy*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::CodeSigningPolicy*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::CodeSigningPolicy::CodeSigningPolicy() {}
