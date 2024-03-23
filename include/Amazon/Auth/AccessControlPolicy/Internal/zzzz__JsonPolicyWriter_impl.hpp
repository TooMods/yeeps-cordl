#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Auth/AccessControlPolicy/Internal/zzzz__JsonPolicyWriter_def.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__Condition_def.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__Policy_def.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__Statement_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__JsonWriter_def.hpp"
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter.WritePolicyToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(bool, ::Amazon::Auth::AccessControlPolicy::Policy*)>(
    &::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::WritePolicyToString)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x25eb208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*>::get(), "WritePolicyToString",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Policy*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter.writePolicy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Auth::AccessControlPolicy::Policy*, ::ThirdParty::Json::LitJson::JsonWriter*)>(
    &::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::writePolicy)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x25ef0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*>::get(), "writePolicy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Policy*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter.writePrincipals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Auth::AccessControlPolicy::Statement*, ::ThirdParty::Json::LitJson::JsonWriter*)>(
    &::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::writePrincipals)> {
  constexpr static std::size_t size = 0x9b4;
  constexpr static std::size_t addrs = 0x25ef5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*>::get(), "writePrincipals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter.writeActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Auth::AccessControlPolicy::Statement*, ::ThirdParty::Json::LitJson::JsonWriter*)>(
    &::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::writeActions)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x25eff78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*>::get(), "writeActions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter.writeResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Auth::AccessControlPolicy::Statement*, ::ThirdParty::Json::LitJson::JsonWriter*)>(
    &::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::writeResources)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x25f0404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*>::get(), "writeResources", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter.writeConditions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Auth::AccessControlPolicy::Statement*, ::ThirdParty::Json::LitJson::JsonWriter*)>(
    &::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::writeConditions)> {
  constexpr static std::size_t size = 0x894;
  constexpr static std::size_t addrs = 0x25f0890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*>::get(), "writeConditions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter.sortConditionsByTypeAndKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*>* (*)(::System::Collections::Generic::IList_1<
                                                                                                                                  ::Amazon::Auth::AccessControlPolicy::Condition*>*)>(
    &::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::sortConditionsByTypeAndKey)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x25f1124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*>::get(), "sortConditionsByTypeAndKey",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter.writePropertyValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ThirdParty::Json::LitJson::JsonWriter*, ::StringW, ::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::writePropertyValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x25ef58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*>::get(), "writePropertyValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::StringW Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::WritePolicyToString(bool prettyPrint, ::Amazon::Auth::AccessControlPolicy::Policy* policy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*>::get(), "WritePolicyToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Policy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, prettyPrint, policy);
}
inline void Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::writePolicy(::Amazon::Auth::AccessControlPolicy::Policy* policy, ::ThirdParty::Json::LitJson::JsonWriter* generator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*>::get(), "writePolicy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Policy*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, policy, generator);
}
inline void Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::writePrincipals(::Amazon::Auth::AccessControlPolicy::Statement* statement,
                                                                                           ::ThirdParty::Json::LitJson::JsonWriter* generator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*>::get(), "writePrincipals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statement, generator);
}
inline void Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::writeActions(::Amazon::Auth::AccessControlPolicy::Statement* statement, ::ThirdParty::Json::LitJson::JsonWriter* generator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*>::get(), "writeActions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statement, generator);
}
inline void Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::writeResources(::Amazon::Auth::AccessControlPolicy::Statement* statement,
                                                                                          ::ThirdParty::Json::LitJson::JsonWriter* generator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*>::get(), "writeResources", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statement, generator);
}
inline void Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::writeConditions(::Amazon::Auth::AccessControlPolicy::Statement* statement,
                                                                                           ::ThirdParty::Json::LitJson::JsonWriter* generator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*>::get(), "writeConditions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statement, generator);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*>*
Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::sortConditionsByTypeAndKey(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>* conditions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*>::get(), "sortConditionsByTypeAndKey",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*>*, false>(
      nullptr, ___internal_method, conditions);
}
inline void Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::writePropertyValue(::ThirdParty::Json::LitJson::JsonWriter* generator, ::StringW propertyName, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter*>::get(), "writePropertyValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, generator, propertyName, value);
}
// Ctor Parameters []
constexpr ::Amazon::Auth::AccessControlPolicy::Internal::JsonPolicyWriter::JsonPolicyWriter() {}
