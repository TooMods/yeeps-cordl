#pragma once
#include "Amazon/Auth/AccessControlPolicy/zzzz__Statement_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__Statement_def.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__ActionIdentifier_def.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__Condition_def.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__Principal_def.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__Resource_def.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__Statement_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect::__Statement__StatementEffect(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect::__Statement__StatementEffect() {}
constexpr ::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect::Allow{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect::Deny{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::Auth::AccessControlPolicy::Statement::*)(::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect)>(&::Amazon::Auth::AccessControlPolicy::Statement::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x25ec10c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.get_Id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Auth::AccessControlPolicy::Statement::*)()>(
    &::Amazon::Auth::AccessControlPolicy::Statement::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ec2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "get_Id",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.set_Id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Auth::AccessControlPolicy::Statement::*)(::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::Statement::set_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ec2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "set_Id", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.WithId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Statement* (::Amazon::Auth::AccessControlPolicy::Statement::*)(::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::Statement::WithId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ec2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "WithId", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.get_Effect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect (::Amazon::Auth::AccessControlPolicy::Statement::*)()>(&::Amazon::Auth::AccessControlPolicy::Statement::get_Effect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ec2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                                                               "get_Effect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.set_Effect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Auth::AccessControlPolicy::Statement::*)(
    ::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect)>(&::Amazon::Auth::AccessControlPolicy::Statement::set_Effect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ec2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "set_Effect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.get_Actions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>* (
    ::Amazon::Auth::AccessControlPolicy::Statement::*)()>(&::Amazon::Auth::AccessControlPolicy::Statement::get_Actions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ec2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                                                               "get_Actions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.set_Actions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Auth::AccessControlPolicy::Statement::*)(
    ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>*)>(&::Amazon::Auth::AccessControlPolicy::Statement::set_Actions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ec2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "set_Actions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.WithActionIdentifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Statement* (
    ::Amazon::Auth::AccessControlPolicy::Statement::*)(::ArrayW<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*, ::Array<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>*>)>(
    &::Amazon::Auth::AccessControlPolicy::Statement::WithActionIdentifiers)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x25ec304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "WithActionIdentifiers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*, ::Array<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.get_Resources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>* (
    ::Amazon::Auth::AccessControlPolicy::Statement::*)()>(&::Amazon::Auth::AccessControlPolicy::Statement::get_Resources)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ec450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                                                               "get_Resources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.set_Resources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Auth::AccessControlPolicy::Statement::*)(
    ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>*)>(&::Amazon::Auth::AccessControlPolicy::Statement::set_Resources)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ec458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "set_Resources", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.WithResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Statement* (
    ::Amazon::Auth::AccessControlPolicy::Statement::*)(::ArrayW<::Amazon::Auth::AccessControlPolicy::Resource*, ::Array<::Amazon::Auth::AccessControlPolicy::Resource*>*>)>(
    &::Amazon::Auth::AccessControlPolicy::Statement::WithResources)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x25ec460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "WithResources", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::Auth::AccessControlPolicy::Resource*, ::Array<::Amazon::Auth::AccessControlPolicy::Resource*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.get_Conditions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>* (
    ::Amazon::Auth::AccessControlPolicy::Statement::*)()>(&::Amazon::Auth::AccessControlPolicy::Statement::get_Conditions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ec5ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                                                               "get_Conditions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.set_Conditions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Auth::AccessControlPolicy::Statement::*)(
    ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>*)>(&::Amazon::Auth::AccessControlPolicy::Statement::set_Conditions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ec5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "set_Conditions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.WithConditions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Statement* (
    ::Amazon::Auth::AccessControlPolicy::Statement::*)(::ArrayW<::Amazon::Auth::AccessControlPolicy::Condition*, ::Array<::Amazon::Auth::AccessControlPolicy::Condition*>*>)>(
    &::Amazon::Auth::AccessControlPolicy::Statement::WithConditions)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x25ec5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "WithConditions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::Auth::AccessControlPolicy::Condition*, ::Array<::Amazon::Auth::AccessControlPolicy::Condition*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.get_Principals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>* (
    ::Amazon::Auth::AccessControlPolicy::Statement::*)()>(&::Amazon::Auth::AccessControlPolicy::Statement::get_Principals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ec708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                                                               "get_Principals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.set_Principals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Auth::AccessControlPolicy::Statement::*)(
    ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>*)>(&::Amazon::Auth::AccessControlPolicy::Statement::set_Principals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ec710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "set_Principals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Statement.WithPrincipals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Auth::AccessControlPolicy::Statement* (
    ::Amazon::Auth::AccessControlPolicy::Statement::*)(::ArrayW<::Amazon::Auth::AccessControlPolicy::Principal*, ::Array<::Amazon::Auth::AccessControlPolicy::Principal*>*>)>(
    &::Amazon::Auth::AccessControlPolicy::Statement::WithPrincipals)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x25ec718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "WithPrincipals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::Auth::AccessControlPolicy::Principal*, ::Array<::Amazon::Auth::AccessControlPolicy::Principal*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::StringW const& Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_set_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect& Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_get_effect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effect;
}
constexpr ::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect const& Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_get_effect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effect;
}
constexpr void Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_set_effect(::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___effect = value;
}
constexpr ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>*& Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_get_principals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___principals;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>*> const&
Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_get_principals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___principals;
}
constexpr void Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_set_principals(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___principals)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>*& Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_get_actions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>*> const&
Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_get_actions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actions;
}
constexpr void Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_set_actions(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___actions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>*& Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_get_resources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resources;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>*> const&
Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_get_resources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resources;
}
constexpr void Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_set_resources(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>*& Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_get_conditions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___conditions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>*> const&
Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_get_conditions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___conditions;
}
constexpr void Amazon::Auth::AccessControlPolicy::Statement::__cordl_internal_set_conditions(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___conditions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Auth::AccessControlPolicy::Statement* Amazon::Auth::AccessControlPolicy::Statement::New_ctor(::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect effect) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Auth::AccessControlPolicy::Statement*>(effect));
}
inline void Amazon::Auth::AccessControlPolicy::Statement::_ctor(::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect effect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, effect);
}
inline ::StringW Amazon::Auth::AccessControlPolicy::Statement::get_Id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "get_Id",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Auth::AccessControlPolicy::Statement::set_Id(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "set_Id", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Auth::AccessControlPolicy::Statement* Amazon::Auth::AccessControlPolicy::Statement::WithId(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "WithId", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Statement*, false>(this, ___internal_method, id);
}
inline ::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect Amazon::Auth::AccessControlPolicy::Statement::get_Effect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                                                             "get_Effect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect, false>(this, ___internal_method);
}
inline void Amazon::Auth::AccessControlPolicy::Statement::set_Effect(::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "set_Effect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Auth::AccessControlPolicy::__Statement__StatementEffect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>* Amazon::Auth::AccessControlPolicy::Statement::get_Actions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                                                             "get_Actions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>*, false>(this, ___internal_method);
}
inline void Amazon::Auth::AccessControlPolicy::Statement::set_Actions(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "set_Actions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Auth::AccessControlPolicy::Statement* Amazon::Auth::AccessControlPolicy::Statement::WithActionIdentifiers(
    ::ArrayW<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*, ::Array<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>*> actions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "WithActionIdentifiers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*, ::Array<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Statement*, false>(this, ___internal_method, actions);
}
inline ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>* Amazon::Auth::AccessControlPolicy::Statement::get_Resources() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                                                             "get_Resources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>*, false>(this, ___internal_method);
}
inline void Amazon::Auth::AccessControlPolicy::Statement::set_Resources(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "set_Resources", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Resource*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Auth::AccessControlPolicy::Statement*
Amazon::Auth::AccessControlPolicy::Statement::WithResources(::ArrayW<::Amazon::Auth::AccessControlPolicy::Resource*, ::Array<::Amazon::Auth::AccessControlPolicy::Resource*>*> resources) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "WithResources", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::Auth::AccessControlPolicy::Resource*, ::Array<::Amazon::Auth::AccessControlPolicy::Resource*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Statement*, false>(this, ___internal_method, resources);
}
inline ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>* Amazon::Auth::AccessControlPolicy::Statement::get_Conditions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                                                             "get_Conditions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>*, false>(this, ___internal_method);
}
inline void Amazon::Auth::AccessControlPolicy::Statement::set_Conditions(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "set_Conditions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Condition*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Auth::AccessControlPolicy::Statement*
Amazon::Auth::AccessControlPolicy::Statement::WithConditions(::ArrayW<::Amazon::Auth::AccessControlPolicy::Condition*, ::Array<::Amazon::Auth::AccessControlPolicy::Condition*>*> conditions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "WithConditions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::Auth::AccessControlPolicy::Condition*, ::Array<::Amazon::Auth::AccessControlPolicy::Condition*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Statement*, false>(this, ___internal_method, conditions);
}
inline ::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>* Amazon::Auth::AccessControlPolicy::Statement::get_Principals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(),
                                                                             "get_Principals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>*, false>(this, ___internal_method);
}
inline void Amazon::Auth::AccessControlPolicy::Statement::set_Principals(::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "set_Principals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::Amazon::Auth::AccessControlPolicy::Principal*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Auth::AccessControlPolicy::Statement*
Amazon::Auth::AccessControlPolicy::Statement::WithPrincipals(::ArrayW<::Amazon::Auth::AccessControlPolicy::Principal*, ::Array<::Amazon::Auth::AccessControlPolicy::Principal*>*> principals) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Statement*>::get(), "WithPrincipals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::Auth::AccessControlPolicy::Principal*, ::Array<::Amazon::Auth::AccessControlPolicy::Principal*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Auth::AccessControlPolicy::Statement*, false>(this, ___internal_method, principals);
}
// Ctor Parameters []
constexpr ::Amazon::Auth::AccessControlPolicy::Statement::Statement() {}
