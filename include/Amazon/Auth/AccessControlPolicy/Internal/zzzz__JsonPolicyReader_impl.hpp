#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Auth/AccessControlPolicy/Internal/zzzz__JsonPolicyReader_def.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__Policy_def.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__Statement_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__JsonData_def.hpp"
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader.ReadJsonStringToPolicy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Policy* (*)(::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::ReadJsonStringToPolicy)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x25eb474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*>::get(), "ReadJsonStringToPolicy",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader.convertStatement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Statement* (*)(::ThirdParty::Json::LitJson::JsonData*)>(
    &::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::convertStatement)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x25ec864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*>::get(), "convertStatement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader.convertPrincipals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Auth::AccessControlPolicy::Statement*, ::ThirdParty::Json::LitJson::JsonData*)>(
    &::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::convertPrincipals)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x25ed804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*>::get(), "convertPrincipals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader.convertPrincipalRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Auth::AccessControlPolicy::Statement*, ::ThirdParty::Json::LitJson::JsonData*)>(
    &::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::convertPrincipalRecord)> {
  constexpr static std::size_t size = 0x848;
  constexpr static std::size_t addrs = 0x25edcb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*>::get(),
                                                 "convertPrincipalRecord", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader.convertActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Auth::AccessControlPolicy::Statement*, ::ThirdParty::Json::LitJson::JsonData*)>(
    &::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::convertActions)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x25eca08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*>::get(), "convertActions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader.convertResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Auth::AccessControlPolicy::Statement*, ::ThirdParty::Json::LitJson::JsonData*)>(
    &::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::convertResources)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x25ecf3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*>::get(), "convertResources", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader.convertCondition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Auth::AccessControlPolicy::Statement*, ::ThirdParty::Json::LitJson::JsonData*)>(
    &::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::convertCondition)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x25ed470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*>::get(), "convertCondition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader.convertConditionRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Auth::AccessControlPolicy::Statement*, ::ThirdParty::Json::LitJson::JsonData*)>(
    &::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::convertConditionRecord)> {
  constexpr static std::size_t size = 0xbe8;
  constexpr static std::size_t addrs = 0x25ee4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*>::get(),
                                                 "convertConditionRecord", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
    return ___internal_method;
  }
};
inline ::Amazon::Auth::AccessControlPolicy::Policy* Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::ReadJsonStringToPolicy(::StringW jsonString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*>::get(), "ReadJsonStringToPolicy",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Policy*, false>(nullptr, ___internal_method, jsonString);
}
inline ::Amazon::Auth::AccessControlPolicy::Statement* Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::convertStatement(::ThirdParty::Json::LitJson::JsonData* jStatement) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*>::get(), "convertStatement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Statement*, false>(nullptr, ___internal_method, jStatement);
}
inline void Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::convertPrincipals(::Amazon::Auth::AccessControlPolicy::Statement* statement,
                                                                                             ::ThirdParty::Json::LitJson::JsonData* jStatement) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*>::get(), "convertPrincipals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statement, jStatement);
}
inline void Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::convertPrincipalRecord(::Amazon::Auth::AccessControlPolicy::Statement* statement,
                                                                                                  ::ThirdParty::Json::LitJson::JsonData* jPrincipal) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*>::get(),
                                               "convertPrincipalRecord", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statement, jPrincipal);
}
inline void Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::convertActions(::Amazon::Auth::AccessControlPolicy::Statement* statement,
                                                                                          ::ThirdParty::Json::LitJson::JsonData* jStatement) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*>::get(), "convertActions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statement, jStatement);
}
inline void Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::convertResources(::Amazon::Auth::AccessControlPolicy::Statement* statement,
                                                                                            ::ThirdParty::Json::LitJson::JsonData* jStatement) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*>::get(), "convertResources", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statement, jStatement);
}
inline void Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::convertCondition(::Amazon::Auth::AccessControlPolicy::Statement* statement,
                                                                                            ::ThirdParty::Json::LitJson::JsonData* jStatement) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*>::get(), "convertCondition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statement, jStatement);
}
inline void Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::convertConditionRecord(::Amazon::Auth::AccessControlPolicy::Statement* statement,
                                                                                                  ::ThirdParty::Json::LitJson::JsonData* jCondition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader*>::get(),
                                               "convertConditionRecord", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statement, jCondition);
}
// Ctor Parameters []
constexpr ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyReader::JsonPolicyReader() {}
