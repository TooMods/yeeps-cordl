#pragma once
#include "Amazon/Runtime/zzzz__ConstantClass_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__ContributorInsightsAction_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::ContributorInsightsAction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::ContributorInsightsAction::*)(::StringW)>(
    &::Amazon::DynamoDBv2::ContributorInsightsAction::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1210d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContributorInsightsAction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ContributorInsightsAction.FindValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ContributorInsightsAction* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::ContributorInsightsAction::FindValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1210dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContributorInsightsAction*>::get(), "FindValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::ContributorInsightsAction.op_Implicit___Amazon__DynamoDBv2__ContributorInsightsAction_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ContributorInsightsAction* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::ContributorInsightsAction::op_Implicit___Amazon__DynamoDBv2__ContributorInsightsAction_)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1210e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContributorInsightsAction*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::ContributorInsightsAction::setStaticF_DISABLE(::Amazon::DynamoDBv2::ContributorInsightsAction* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ContributorInsightsAction*, "DISABLE",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContributorInsightsAction*>::get>(
      std::forward<::Amazon::DynamoDBv2::ContributorInsightsAction*>(value));
}
inline ::Amazon::DynamoDBv2::ContributorInsightsAction* Amazon::DynamoDBv2::ContributorInsightsAction::getStaticF_DISABLE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ContributorInsightsAction*, "DISABLE",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContributorInsightsAction*>::get>();
}
inline void Amazon::DynamoDBv2::ContributorInsightsAction::setStaticF_ENABLE(::Amazon::DynamoDBv2::ContributorInsightsAction* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ContributorInsightsAction*, "ENABLE",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContributorInsightsAction*>::get>(
      std::forward<::Amazon::DynamoDBv2::ContributorInsightsAction*>(value));
}
inline ::Amazon::DynamoDBv2::ContributorInsightsAction* Amazon::DynamoDBv2::ContributorInsightsAction::getStaticF_ENABLE() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ContributorInsightsAction*, "ENABLE",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContributorInsightsAction*>::get>();
}
inline ::Amazon::DynamoDBv2::ContributorInsightsAction* Amazon::DynamoDBv2::ContributorInsightsAction::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::ContributorInsightsAction*>(value));
}
inline void Amazon::DynamoDBv2::ContributorInsightsAction::_ctor(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContributorInsightsAction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ContributorInsightsAction* Amazon::DynamoDBv2::ContributorInsightsAction::FindValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContributorInsightsAction*>::get(), "FindValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ContributorInsightsAction*, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ContributorInsightsAction* Amazon::DynamoDBv2::ContributorInsightsAction::op_Implicit___Amazon__DynamoDBv2__ContributorInsightsAction_(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::ContributorInsightsAction*>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ContributorInsightsAction*, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::ContributorInsightsAction::ContributorInsightsAction() {}
