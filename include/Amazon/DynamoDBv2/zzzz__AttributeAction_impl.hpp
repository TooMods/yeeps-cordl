#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__AttributeAction_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::AttributeAction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::AttributeAction::*)(::StringW)>(&::Amazon::DynamoDBv2::AttributeAction::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x120f7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AttributeAction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AttributeAction.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::AttributeAction* (*)(::StringW)>(&::Amazon::DynamoDBv2::AttributeAction::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x120f840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AttributeAction*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AttributeAction.op_Implicit___Amazon__DynamoDBv2__AttributeAction_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::AttributeAction* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::AttributeAction::op_Implicit___Amazon__DynamoDBv2__AttributeAction_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x120f8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AttributeAction*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::AttributeAction::setStaticF_ADD(::Amazon::DynamoDBv2::AttributeAction* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::AttributeAction*, "ADD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AttributeAction*>::get>(
      std::forward<::Amazon::DynamoDBv2::AttributeAction*>(value));
}
inline ::Amazon::DynamoDBv2::AttributeAction* Amazon::DynamoDBv2::AttributeAction::getStaticF_ADD() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::AttributeAction*, "ADD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AttributeAction*>::get>();
}
inline void Amazon::DynamoDBv2::AttributeAction::setStaticF_DELETE(::Amazon::DynamoDBv2::AttributeAction* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::AttributeAction*, "DELETE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AttributeAction*>::get>(
      std::forward<::Amazon::DynamoDBv2::AttributeAction*>(value));
}
inline ::Amazon::DynamoDBv2::AttributeAction* Amazon::DynamoDBv2::AttributeAction::getStaticF_DELETE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::AttributeAction*, "DELETE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AttributeAction*>::get>();
}
inline void Amazon::DynamoDBv2::AttributeAction::setStaticF_PUT(::Amazon::DynamoDBv2::AttributeAction* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::AttributeAction*, "PUT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AttributeAction*>::get>(
      std::forward<::Amazon::DynamoDBv2::AttributeAction*>(value));
}
inline ::Amazon::DynamoDBv2::AttributeAction* Amazon::DynamoDBv2::AttributeAction::getStaticF_PUT() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::AttributeAction*, "PUT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AttributeAction*>::get>();
}
inline ::Amazon::DynamoDBv2::AttributeAction* Amazon::DynamoDBv2::AttributeAction::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::AttributeAction*>(value));
}
inline void Amazon::DynamoDBv2::AttributeAction::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AttributeAction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::AttributeAction* Amazon::DynamoDBv2::AttributeAction::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AttributeAction*>::get(), "FindValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::AttributeAction*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::AttributeAction* Amazon::DynamoDBv2::AttributeAction::op_Implicit___Amazon__DynamoDBv2__AttributeAction_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AttributeAction*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::AttributeAction*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::AttributeAction::AttributeAction() {}
