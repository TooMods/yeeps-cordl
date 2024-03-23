#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/Lambda/zzzz__EventSourcePosition_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::EventSourcePosition._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::EventSourcePosition::*)(::StringW)>(&::Amazon::Lambda::EventSourcePosition::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bb546c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::EventSourcePosition*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::EventSourcePosition.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::EventSourcePosition* (*)(::StringW)>(&::Amazon::Lambda::EventSourcePosition::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2bb54d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::EventSourcePosition*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::EventSourcePosition.op_Implicit___Amazon__Lambda__EventSourcePosition_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::EventSourcePosition* (*)(::StringW)>(
    &::Amazon::Lambda::EventSourcePosition::op_Implicit___Amazon__Lambda__EventSourcePosition_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bb5540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::EventSourcePosition*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Lambda::EventSourcePosition::setStaticF_AT_TIMESTAMP(::Amazon::Lambda::EventSourcePosition* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::EventSourcePosition*, "AT_TIMESTAMP", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::EventSourcePosition*>::get>(
      std::forward<::Amazon::Lambda::EventSourcePosition*>(value));
}
inline ::Amazon::Lambda::EventSourcePosition* Amazon::Lambda::EventSourcePosition::getStaticF_AT_TIMESTAMP() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::EventSourcePosition*, "AT_TIMESTAMP",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::EventSourcePosition*>::get>();
}
inline void Amazon::Lambda::EventSourcePosition::setStaticF_LATEST(::Amazon::Lambda::EventSourcePosition* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::EventSourcePosition*, "LATEST", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::EventSourcePosition*>::get>(
      std::forward<::Amazon::Lambda::EventSourcePosition*>(value));
}
inline ::Amazon::Lambda::EventSourcePosition* Amazon::Lambda::EventSourcePosition::getStaticF_LATEST() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::EventSourcePosition*, "LATEST", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::EventSourcePosition*>::get>();
}
inline void Amazon::Lambda::EventSourcePosition::setStaticF_TRIM_HORIZON(::Amazon::Lambda::EventSourcePosition* value) {
  ::cordl_internals::setStaticField<::Amazon::Lambda::EventSourcePosition*, "TRIM_HORIZON", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::EventSourcePosition*>::get>(
      std::forward<::Amazon::Lambda::EventSourcePosition*>(value));
}
inline ::Amazon::Lambda::EventSourcePosition* Amazon::Lambda::EventSourcePosition::getStaticF_TRIM_HORIZON() {
  return ::cordl_internals::getStaticField<::Amazon::Lambda::EventSourcePosition*, "TRIM_HORIZON",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::EventSourcePosition*>::get>();
}
inline ::Amazon::Lambda::EventSourcePosition* Amazon::Lambda::EventSourcePosition::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::EventSourcePosition*>(value));
}
inline void Amazon::Lambda::EventSourcePosition::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::EventSourcePosition*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Lambda::EventSourcePosition* Amazon::Lambda::EventSourcePosition::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::EventSourcePosition*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::EventSourcePosition*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::Lambda::EventSourcePosition* Amazon::Lambda::EventSourcePosition::op_Implicit___Amazon__Lambda__EventSourcePosition_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::EventSourcePosition*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::EventSourcePosition*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::EventSourcePosition::EventSourcePosition() {}
