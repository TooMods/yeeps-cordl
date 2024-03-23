#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/Lambda/zzzz__InvocationType_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::InvocationType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::InvocationType::*)(::StringW)>(&::Amazon::Lambda::InvocationType::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bb59b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::InvocationType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::InvocationType.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::InvocationType* (*)(::StringW)>(&::Amazon::Lambda::InvocationType::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2bb5a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::InvocationType*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::InvocationType.op_Implicit___Amazon__Lambda__InvocationType_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::InvocationType* (*)(::StringW)>(
    &::Amazon::Lambda::InvocationType::op_Implicit___Amazon__Lambda__InvocationType_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bb5a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::InvocationType*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Lambda::InvocationType::setStaticF_DryRun(::Amazon::Lambda::InvocationType* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::InvocationType*, "DryRun", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::InvocationType*>::get>(
      std::forward<::Amazon::Lambda::InvocationType*>(value));
}
inline ::Amazon::Lambda::InvocationType* Amazon::Lambda::InvocationType::getStaticF_DryRun() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::InvocationType*, "DryRun", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::InvocationType*>::get>();
}
inline void Amazon::Lambda::InvocationType::setStaticF_Event(::Amazon::Lambda::InvocationType* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::InvocationType*, "Event", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::InvocationType*>::get>(
      std::forward<::Amazon::Lambda::InvocationType*>(value));
}
inline ::Amazon::Lambda::InvocationType* Amazon::Lambda::InvocationType::getStaticF_Event() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::InvocationType*, "Event", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::InvocationType*>::get>();
}
inline void Amazon::Lambda::InvocationType::setStaticF_RequestResponse(::Amazon::Lambda::InvocationType* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::InvocationType*, "RequestResponse", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::InvocationType*>::get>(
      std::forward<::Amazon::Lambda::InvocationType*>(value));
}
inline ::Amazon::Lambda::InvocationType* Amazon::Lambda::InvocationType::getStaticF_RequestResponse() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::InvocationType*, "RequestResponse", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::InvocationType*>::get>();
}
inline ::Amazon::Lambda::InvocationType* Amazon::Lambda::InvocationType::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::InvocationType*>(value));
}
inline void Amazon::Lambda::InvocationType::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::InvocationType*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Lambda::InvocationType* Amazon::Lambda::InvocationType::FindValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::InvocationType*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::InvocationType*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::Lambda::InvocationType* Amazon::Lambda::InvocationType::op_Implicit___Amazon__Lambda__InvocationType_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::InvocationType*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::InvocationType*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::InvocationType::InvocationType() {}
