#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/Lambda/zzzz__State_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::State._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::State::*)(::StringW)>(&::Amazon::Lambda::State::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bb6ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::State*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::State.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::State* (*)(::StringW)>(&::Amazon::Lambda::State::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2bb7064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::State*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::State.op_Implicit___Amazon__Lambda__State_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::State* (*)(::StringW)>(&::Amazon::Lambda::State::op_Implicit___Amazon__Lambda__State_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bb70d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::State*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Lambda::State::setStaticF_Active(::Amazon::Lambda::State* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::State*, "Active", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::State*>::get>(
      std::forward<::Amazon::Lambda::State*>(value));
}
inline ::Amazon::Lambda::State* Amazon::Lambda::State::getStaticF_Active() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::State*, "Active", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::State*>::get>();
}
inline void Amazon::Lambda::State::setStaticF_Failed(::Amazon::Lambda::State* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::State*, "Failed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::State*>::get>(
      std::forward<::Amazon::Lambda::State*>(value));
}
inline ::Amazon::Lambda::State* Amazon::Lambda::State::getStaticF_Failed() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::State*, "Failed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::State*>::get>();
}
inline void Amazon::Lambda::State::setStaticF_Inactive(::Amazon::Lambda::State* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::State*, "Inactive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::State*>::get>(
      std::forward<::Amazon::Lambda::State*>(value));
}
inline ::Amazon::Lambda::State* Amazon::Lambda::State::getStaticF_Inactive() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::State*, "Inactive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::State*>::get>();
}
inline void Amazon::Lambda::State::setStaticF_Pending(::Amazon::Lambda::State* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::State*, "Pending", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::State*>::get>(
      std::forward<::Amazon::Lambda::State*>(value));
}
inline ::Amazon::Lambda::State* Amazon::Lambda::State::getStaticF_Pending() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::State*, "Pending", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::State*>::get>();
}
inline ::Amazon::Lambda::State* Amazon::Lambda::State::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::State*>(value));
}
inline void Amazon::Lambda::State::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::State*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Lambda::State* Amazon::Lambda::State::FindValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::State*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::State*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::Lambda::State* Amazon::Lambda::State::op_Implicit___Amazon__Lambda__State_(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::State*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::State*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::State::State() {}
