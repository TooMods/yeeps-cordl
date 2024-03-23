#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ScanOperator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ExpectedValue_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Primitive_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__ScanOperator_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ExpectedAttributeValue_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__DynamoDBEntryConversion_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue.get_Exists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::get_Exists)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1653920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(),
                                                                               "get_Exists", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue.set_Exists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::*)(bool)>(
    &::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::set_Exists)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1653928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(), "set_Exists",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue.get_Comparison
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::ScanOperator (::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::get_Comparison)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1653934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(),
                                                                               "get_Comparison", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue.set_Comparison
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::*)(::Amazon::DynamoDBv2::DocumentModel::ScanOperator)>(
    &::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::set_Comparison)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x165393c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(), "set_Comparison", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ScanOperator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue.get_Values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* (
    ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::*)()>(&::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::get_Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1653944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(),
                                                                               "get_Values", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue.set_Values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*)>(&::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::set_Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x165394c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(), "set_Values", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::*)(bool)>(
    &::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1653954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::*)(
    ::Amazon::DynamoDBv2::DocumentModel::ScanOperator, ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>)>(
    &::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x16539e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ScanOperator>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue.ToExpectedAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ExpectedAttributeValue* (::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::ToExpectedAttributeValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1653a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(),
                                                                               "ToExpectedAttributeValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue.ToExpectedAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ExpectedAttributeValue* (
    ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::*)(::Amazon::DynamoDBv2::DynamoDBEntryConversion*)>(&::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::ToExpectedAttributeValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1653b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(), "ToExpectedAttributeValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue.ToExpectedAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ExpectedAttributeValue* (
    ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::*)(::Amazon::DynamoDBv2::DynamoDBEntryConversion*, bool)>(&::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::ToExpectedAttributeValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1653aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(), "ToExpectedAttributeValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue.ToExpectedAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::Model::ExpectedAttributeValue* (*)(bool, ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*,
                                                                         ::Amazon::DynamoDBv2::DocumentModel::ScanOperator, ::Amazon::DynamoDBv2::DynamoDBEntryConversion*, bool)>(
        &::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::ToExpectedAttributeValue)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x1653bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(), "ToExpectedAttributeValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ScanOperator>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Amazon::DynamoDBv2::DocumentModel::ExpectedValue::__cordl_internal_get__Exists_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Exists_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DocumentModel::ExpectedValue::__cordl_internal_get__Exists_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Exists_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::ExpectedValue::__cordl_internal_set__Exists_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Exists_k__BackingField = value;
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator& Amazon::DynamoDBv2::DocumentModel::ExpectedValue::__cordl_internal_get__Comparison_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Comparison_k__BackingField;
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::ScanOperator const& Amazon::DynamoDBv2::DocumentModel::ExpectedValue::__cordl_internal_get__Comparison_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Comparison_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::ExpectedValue::__cordl_internal_set__Comparison_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::ScanOperator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Comparison_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*& Amazon::DynamoDBv2::DocumentModel::ExpectedValue::__cordl_internal_get__Values_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Values_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> const&
Amazon::DynamoDBv2::DocumentModel::ExpectedValue::__cordl_internal_get__Values_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Values_k__BackingField;
}
constexpr void
Amazon::DynamoDBv2::DocumentModel::ExpectedValue::__cordl_internal_set__Values_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Values_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool Amazon::DynamoDBv2::DocumentModel::ExpectedValue::get_Exists() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(),
                                                                             "get_Exists", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ExpectedValue::set_Exists(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(), "set_Exists",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::ScanOperator Amazon::DynamoDBv2::DocumentModel::ExpectedValue::get_Comparison() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(),
                                                                             "get_Comparison", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::ScanOperator, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ExpectedValue::set_Comparison(::Amazon::DynamoDBv2::DocumentModel::ScanOperator value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(), "set_Comparison", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ScanOperator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* Amazon::DynamoDBv2::DocumentModel::ExpectedValue::get_Values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(),
                                                                             "get_Values", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::ExpectedValue::set_Values(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(), "set_Values", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue* Amazon::DynamoDBv2::DocumentModel::ExpectedValue::New_ctor(bool exists) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>(exists));
}
inline void Amazon::DynamoDBv2::DocumentModel::ExpectedValue::_ctor(bool exists) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exists);
}
inline ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*
Amazon::DynamoDBv2::DocumentModel::ExpectedValue::New_ctor(::Amazon::DynamoDBv2::DocumentModel::ScanOperator comparison,
                                                           ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> values) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>(comparison, values));
}
inline void Amazon::DynamoDBv2::DocumentModel::ExpectedValue::_ctor(::Amazon::DynamoDBv2::DocumentModel::ScanOperator comparison,
                                                                    ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ScanOperator>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparison, values);
}
inline ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue* Amazon::DynamoDBv2::DocumentModel::ExpectedValue::ToExpectedAttributeValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(),
                                                                             "ToExpectedAttributeValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue* Amazon::DynamoDBv2::DocumentModel::ExpectedValue::ToExpectedAttributeValue(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(), "ToExpectedAttributeValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*, false>(this, ___internal_method, conversion);
}
inline ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue* Amazon::DynamoDBv2::DocumentModel::ExpectedValue::ToExpectedAttributeValue(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion,
                                                                                                                                       bool isEmptyStringValueEnabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(), "ToExpectedAttributeValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*, false>(this, ___internal_method, conversion, isEmptyStringValueEnabled);
}
inline ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*
Amazon::DynamoDBv2::DocumentModel::ExpectedValue::ToExpectedAttributeValue(bool exists, ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* values,
                                                                           ::Amazon::DynamoDBv2::DocumentModel::ScanOperator comparison, ::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion,
                                                                           bool isEmptyStringValueEnabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::ExpectedValue*>::get(), "ToExpectedAttributeValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::ScanOperator>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*, false>(nullptr, ___internal_method, exists, values, comparison, conversion,
                                                                                                          isEmptyStringValueEnabled);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::ExpectedValue::ExpectedValue() {}
