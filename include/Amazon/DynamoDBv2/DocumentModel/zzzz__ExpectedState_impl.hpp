#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ConditionalOperatorValues_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ExpectedState_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ConditionalOperatorValues_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ExpectedState_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ExpectedValue_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Primitive_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ScanOperator_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Table_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ExpectedAttributeValue_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__DynamoDBEntryConversion_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1654714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0._ToExpectedAttributeMap_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0::*)(::Amazon::DynamoDBv2::DocumentModel::Primitive*)>(
        &::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0::_ToExpectedAttributeMap_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x165471c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0*>::get(),
                                                 "<ToExpectedAttributeMap>b__0", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0::__cordl_internal_get_attributeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0::__cordl_internal_get_attributeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeName;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0::__cordl_internal_set_attributeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0* Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0::_ToExpectedAttributeMap_b__0(::Amazon::DynamoDBv2::DocumentModel::Primitive* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0*>::get(), "<ToExpectedAttributeMap>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(this, ___internal_method, p);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::__ExpectedState____c__DisplayClass14_0::__ExpectedState____c__DisplayClass14_0() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ExpectedState::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::ExpectedState::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1654054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedState.get_ExpectedValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>* (
    ::Amazon::DynamoDBv2::DocumentModel::ExpectedState::*)()>(&::Amazon::DynamoDBv2::DocumentModel::ExpectedState::get_ExpectedValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x165413c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(),
                                                                               "get_ExpectedValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedState.set_ExpectedValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ExpectedState::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>*)>(&::Amazon::DynamoDBv2::DocumentModel::ExpectedState::set_ExpectedValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1654144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(), "set_ExpectedValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedState.get_ConditionalOperator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues (
    ::Amazon::DynamoDBv2::DocumentModel::ExpectedState::*)()>(&::Amazon::DynamoDBv2::DocumentModel::ExpectedState::get_ConditionalOperator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x165414c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(),
                                                                               "get_ConditionalOperator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedState.set_ConditionalOperator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ExpectedState::*)(
    ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues)>(&::Amazon::DynamoDBv2::DocumentModel::ExpectedState::set_ConditionalOperator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1654154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(), "set_ConditionalOperator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedState.AddExpected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ExpectedState::*)(::StringW, bool)>(
    &::Amazon::DynamoDBv2::DocumentModel::ExpectedState::AddExpected)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x165415c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(), "AddExpected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedState.AddExpected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ExpectedState::*)(
    ::StringW, ::Amazon::DynamoDBv2::DocumentModel::ScanOperator, ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>)>(
    &::Amazon::DynamoDBv2::DocumentModel::ExpectedState::AddExpected)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x16541f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(), "AddExpected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ScanOperator>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedState.ToExpectedAttributeMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* (
    ::Amazon::DynamoDBv2::DocumentModel::ExpectedState::*)()>(&::Amazon::DynamoDBv2::DocumentModel::ExpectedState::ToExpectedAttributeMap)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x165429c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(),
                                                                               "ToExpectedAttributeMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedState.ToExpectedAttributeMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* (
    ::Amazon::DynamoDBv2::DocumentModel::ExpectedState::*)(::Amazon::DynamoDBv2::DynamoDBEntryConversion*)>(&::Amazon::DynamoDBv2::DocumentModel::ExpectedState::ToExpectedAttributeMap)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1654304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(), "ToExpectedAttributeMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedState.ToExpectedAttributeMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* (
    ::Amazon::DynamoDBv2::DocumentModel::ExpectedState::*)(::Amazon::DynamoDBv2::DocumentModel::Table*)>(&::Amazon::DynamoDBv2::DocumentModel::ExpectedState::ToExpectedAttributeMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x165469c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(), "ToExpectedAttributeMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedState.ToExpectedAttributeMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* (
    ::Amazon::DynamoDBv2::DocumentModel::ExpectedState::*)(::Amazon::DynamoDBv2::DynamoDBEntryConversion*, ::System::Collections::Generic::IEnumerable_1<::StringW>*, bool)>(
    &::Amazon::DynamoDBv2::DocumentModel::ExpectedState::ToExpectedAttributeMap)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x1654310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(), "ToExpectedAttributeMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>*&
Amazon::DynamoDBv2::DocumentModel::ExpectedState::__cordl_internal_get__ExpectedValues_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExpectedValues_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>*> const&
Amazon::DynamoDBv2::DocumentModel::ExpectedState::__cordl_internal_get__ExpectedValues_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExpectedValues_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::ExpectedState::__cordl_internal_set__ExpectedValues_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ExpectedValues_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues& Amazon::DynamoDBv2::DocumentModel::ExpectedState::__cordl_internal_get__ConditionalOperator_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConditionalOperator_k__BackingField;
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues const& Amazon::DynamoDBv2::DocumentModel::ExpectedState::__cordl_internal_get__ConditionalOperator_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConditionalOperator_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::ExpectedState::__cordl_internal_set__ConditionalOperator_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ConditionalOperator_k__BackingField = value;
}
inline ::Amazon::DynamoDBv2::DocumentModel::ExpectedState* Amazon::DynamoDBv2::DocumentModel::ExpectedState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::ExpectedState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>* Amazon::DynamoDBv2::DocumentModel::ExpectedState::get_ExpectedValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(),
                                                                             "get_ExpectedValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ExpectedState::set_ExpectedValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(), "set_ExpectedValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues Amazon::DynamoDBv2::DocumentModel::ExpectedState::get_ConditionalOperator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(),
                                                                             "get_ConditionalOperator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ExpectedState::set_ConditionalOperator(::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(), "set_ConditionalOperator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ConditionalOperatorValues>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::DynamoDBv2::DocumentModel::ExpectedState::AddExpected(::StringW attributeName, bool exists) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(), "AddExpected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeName, exists);
}
inline void Amazon::DynamoDBv2::DocumentModel::ExpectedState::AddExpected(::StringW attributeName, ::Amazon::DynamoDBv2::DocumentModel::ScanOperator comparison,
                                                                          ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> values) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(), "AddExpected", std::span<Il2CppClass const* const, 0>(),
          ::std::array<Il2CppType const*, 3>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ScanOperator>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeName, comparison, values);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* Amazon::DynamoDBv2::DocumentModel::ExpectedState::ToExpectedAttributeMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(),
                                                                             "ToExpectedAttributeMap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*
Amazon::DynamoDBv2::DocumentModel::ExpectedState::ToExpectedAttributeMap(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(), "ToExpectedAttributeMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*, false>(this, ___internal_method,
                                                                                                                                                                    conversion);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*
Amazon::DynamoDBv2::DocumentModel::ExpectedState::ToExpectedAttributeMap(::Amazon::DynamoDBv2::DocumentModel::Table* table) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(), "ToExpectedAttributeMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*, false>(this, ___internal_method, table);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*
Amazon::DynamoDBv2::DocumentModel::ExpectedState::ToExpectedAttributeMap(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion,
                                                                         ::System::Collections::Generic::IEnumerable_1<::StringW>* epochAttributes, bool isEmptyStringValueEnabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedState*>::get(), "ToExpectedAttributeMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*, false>(
      this, ___internal_method, conversion, epochAttributes, isEmptyStringValueEnabled);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::ExpectedState::ExpectedState() {}
