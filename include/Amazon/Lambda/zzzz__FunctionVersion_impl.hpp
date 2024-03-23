#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/Lambda/zzzz__FunctionVersion_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::FunctionVersion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::FunctionVersion::*)(::StringW)>(&::Amazon::Lambda::FunctionVersion::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bb5818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::FunctionVersion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::FunctionVersion.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::FunctionVersion* (*)(::StringW)>(&::Amazon::Lambda::FunctionVersion::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2bb5880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::FunctionVersion*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::FunctionVersion.op_Implicit___Amazon__Lambda__FunctionVersion_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::FunctionVersion* (*)(::StringW)>(
    &::Amazon::Lambda::FunctionVersion::op_Implicit___Amazon__Lambda__FunctionVersion_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bb58ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::FunctionVersion*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Lambda::FunctionVersion::setStaticF_ALL(::Amazon::Lambda::FunctionVersion* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::FunctionVersion*, "ALL", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::FunctionVersion*>::get>(
      std::forward<::Amazon::Lambda::FunctionVersion*>(value));
}
inline ::Amazon::Lambda::FunctionVersion* Amazon::Lambda::FunctionVersion::getStaticF_ALL() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::FunctionVersion*, "ALL", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::FunctionVersion*>::get>();
}
inline ::Amazon::Lambda::FunctionVersion* Amazon::Lambda::FunctionVersion::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::FunctionVersion*>(value));
}
inline void Amazon::Lambda::FunctionVersion::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::FunctionVersion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Lambda::FunctionVersion* Amazon::Lambda::FunctionVersion::FindValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::FunctionVersion*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::FunctionVersion*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::Lambda::FunctionVersion* Amazon::Lambda::FunctionVersion::op_Implicit___Amazon__Lambda__FunctionVersion_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::FunctionVersion*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::FunctionVersion*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::FunctionVersion::FunctionVersion() {}
