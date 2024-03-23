#pragma once
#include "Amazon/DynamoDBv2/zzzz__ConversionSchema_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__DynamoDBEntryConversion_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__PrimitiveList_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Primitive_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__ConversionSchema_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__ConverterCache_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__Converter_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__DynamoDBEntryConversion_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::*)(int32_t)>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x120953c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x120a398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x120a3b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__m__Finally1)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x120a6b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(),
                                                 "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28.System_Collections_Generic_IEnumerator_Amazon_DynamoDBv2_DocumentModel_DynamoDBEntry__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::*)()>(
        &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::System_Collections_Generic_IEnumerator_Amazon_DynamoDBv2_DocumentModel_DynamoDBEntry__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120a76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(),
        "System.Collections.Generic.IEnumerator<Amazon.DynamoDBv2.DocumentModel.DynamoDBEntry>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x120a774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120a7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28.System_Collections_Generic_IEnumerable_Amazon_DynamoDBv2_DocumentModel_DynamoDBEntry__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::*)()>(
        &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::System_Collections_Generic_IEnumerable_Amazon_DynamoDBv2_DocumentModel_DynamoDBEntry__GetEnumerator)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x120a7bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(),
        "System.Collections.Generic.IEnumerable<Amazon.DynamoDBv2.DocumentModel.DynamoDBEntry>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x120a870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::operator ::System::Collections::Generic::IEnumerable_1<
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::i___System__Collections__Generic__IEnumerable_1___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::operator ::System::Collections::Generic::IEnumerator_1<
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::i___System__Collections__Generic__IEnumerator_1___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> const&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_set___2__current(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::System::Collections::IEnumerable*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_set_values(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IEnumerable*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get___3__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__values;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get___3__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__values;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_set___3__values(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_set___4__this(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get_elementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get_elementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementType;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_set_elementType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get___3__elementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__elementType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get___3__elementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__elementType;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_set___3__elementType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__elementType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IEnumerator*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__cordl_internal_set___7__wrap1(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>(__1__state));
}
inline void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(),
                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::System_Collections_Generic_IEnumerator_Amazon_DynamoDBv2_DocumentModel_DynamoDBEntry__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(),
      "System.Collections.Generic.IEnumerator<Amazon.DynamoDBv2.DocumentModel.DynamoDBEntry>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::System_Collections_Generic_IEnumerable_Amazon_DynamoDBv2_DocumentModel_DynamoDBEntry__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(),
      "System.Collections.Generic.IEnumerable<Amazon.DynamoDBv2.DocumentModel.DynamoDBEntry>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__28::__DynamoDBEntryConversion___ConvertToEntries_d__28() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
template <typename T>
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::operator ::System::Collections::Generic::IEnumerable_1<
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::i___System__Collections__Generic__IEnumerable_1___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
template <typename T>
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::operator ::System::Collections::Generic::IEnumerator_1<
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::i___System__Collections__Generic__IEnumerator_1___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr int32_t& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> const&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_set___2__current(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_get_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_get_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
template <typename T> constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_set_values(::System::Collections::Generic::IEnumerable_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_get___3__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__values;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> const&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_get___3__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__values;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_set___3__values(::System::Collections::Generic::IEnumerable_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_set___4__this(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Type*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_get__elementType_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementType_5__2;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_get__elementType_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementType_5__2;
}
template <typename T> constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_set__elementType_5__2(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elementType_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> const&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
template <typename T>
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>*>(__1__state));
}
template <typename T> inline void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>*>::get(),
                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::System_Collections_Generic_IEnumerator_Amazon_DynamoDBv2_DocumentModel_DynamoDBEntry__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>*>::get(),
      "System.Collections.Generic.IEnumerator<Amazon.DynamoDBv2.DocumentModel.DynamoDBEntry>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::System_Collections_Generic_IEnumerable_Amazon_DynamoDBv2_DocumentModel_DynamoDBEntry__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>*>::get(),
      "System.Collections.Generic.IEnumerable<Amazon.DynamoDBv2.DocumentModel.DynamoDBEntry>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertToEntries_d__29_1<T>::__DynamoDBEntryConversion___ConvertToEntries_d__29_1() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::*)(int32_t)>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x12095fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x120a874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x120a890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x120ab9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(),
                                                 "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120ac4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x120ac54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120ac94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30.System_Collections_Generic_IEnumerable_System_Object__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>* (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::*)()>(
        &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::System_Collections_Generic_IEnumerable_System_Object__GetEnumerator)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x120ac9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(),
                                    "System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::*)()>(
        &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x120ad50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::operator ::System::Collections::Generic::IEnumerable_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Object*>*
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::i___System__Collections__Generic__IEnumerable_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get_entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> const&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get_entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___entries;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_set_entries(
    ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get___3__entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__entries;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> const&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get___3__entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__entries;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_set___3__entries(
    ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_set___4__this(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get_elementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get_elementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementType;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_set_elementType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get___3__elementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__elementType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get___3__elementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__elementType;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_set___3__elementType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__elementType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> const&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__cordl_internal_set___7__wrap1(
    ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>(__1__state));
}
inline void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(),
                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::System_Collections_Generic_IEnumerable_System_Object__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(),
                                  "System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Object*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ConvertFromEntries_d__30::__DynamoDBEntryConversion___ConvertFromEntries_d__30() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::*)(int32_t)>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x120a364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x120ad54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x120ad70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__m__Finally1)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x120b190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(), "<>m__Finally1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39.System_Collections_Generic_IEnumerator_Amazon_DynamoDBv2_DocumentModel_Primitive__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::Primitive* (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::*)()>(
        &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::System_Collections_Generic_IEnumerator_Amazon_DynamoDBv2_DocumentModel_Primitive__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120b24c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(),
        "System.Collections.Generic.IEnumerator<Amazon.DynamoDBv2.DocumentModel.Primitive>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x120b254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120b294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39.System_Collections_Generic_IEnumerable_Amazon_DynamoDBv2_DocumentModel_Primitive__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::*)()>(
        &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::System_Collections_Generic_IEnumerable_Amazon_DynamoDBv2_DocumentModel_Primitive__GetEnumerator)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x120b29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(),
        "System.Collections.Generic.IEnumerable<Amazon.DynamoDBv2.DocumentModel.Primitive>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::*)()>(
    &::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x120b350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::operator ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::i___System__Collections__Generic__IEnumerable_1___Amazon__DynamoDBv2__DocumentModel__Primitive__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::operator ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::i___System__Collections__Generic__IEnumerator_1___Amazon__DynamoDBv2__DocumentModel__Primitive__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::Primitive*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Primitive*> const&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_set___2__current(::Amazon::DynamoDBv2::DocumentModel::Primitive* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::System::Type*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get_elementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get_elementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementType;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_set_elementType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get___3__elementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__elementType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get___3__elementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__elementType;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_set___3__elementType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__elementType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IEnumerable*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get_items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get_items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_set_items(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IEnumerable*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get___3__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__items;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get___3__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__items;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_set___3__items(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const&
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_set___4__this(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IEnumerator*& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__cordl_internal_set___7__wrap1(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>(__1__state));
}
inline void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::Primitive*
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::System_Collections_Generic_IEnumerator_Amazon_DynamoDBv2_DocumentModel_Primitive__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(),
      "System.Collections.Generic.IEnumerator<Amazon.DynamoDBv2.DocumentModel.Primitive>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Primitive*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::System_Collections_Generic_IEnumerable_Amazon_DynamoDBv2_DocumentModel_Primitive__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(),
      "System.Collections.Generic.IEnumerable<Amazon.DynamoDBv2.DocumentModel.Primitive>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::__DynamoDBEntryConversion___ToPrimitives_d__39::__DynamoDBEntryConversion___ToPrimitives_d__39() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.get_V1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DynamoDBEntryConversion* (*)()>(&::Amazon::DynamoDBv2::DynamoDBEntryConversion::get_V1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x120817c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "get_V1",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.set_V1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::DynamoDBv2::DynamoDBEntryConversion*)>(&::Amazon::DynamoDBv2::DynamoDBEntryConversion::set_V1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x12081d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "set_V1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.get_V2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DynamoDBEntryConversion* (*)()>(&::Amazon::DynamoDBv2::DynamoDBEntryConversion::get_V2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1208230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "get_V2",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.set_V2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::DynamoDBv2::DynamoDBEntryConversion*)>(&::Amazon::DynamoDBv2::DynamoDBEntryConversion::set_V2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1208288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "set_V2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.GetConversion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DynamoDBEntryConversion* (*)(::Amazon::DynamoDBv2::ConversionSchema)>(
    &::Amazon::DynamoDBv2::DynamoDBEntryConversion::GetConversion)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x12082e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "GetConversion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ConversionSchema>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.get_CurrentConversion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DynamoDBEntryConversion* (*)()>(
    &::Amazon::DynamoDBv2::DynamoDBEntryConversion::get_CurrentConversion)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1208418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(),
                                                                               "get_CurrentConversion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)(::Amazon::DynamoDBv2::ConversionSchema, bool)>(
    &::Amazon::DynamoDBv2::DynamoDBEntryConversion::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x12085c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ConversionSchema>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)()>(&::Amazon::DynamoDBv2::DynamoDBEntryConversion::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x12087c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.get_IsImmutable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)()>(
    &::Amazon::DynamoDBv2::DynamoDBEntryConversion::get_IsImmutable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120882c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(),
                                                                               "get_IsImmutable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.set_IsImmutable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)(bool)>(
    &::Amazon::DynamoDBv2::DynamoDBEntryConversion::set_IsImmutable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1208834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "set_IsImmutable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DynamoDBEntryConversion* (::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)()>(
    &::Amazon::DynamoDBv2::DynamoDBEntryConversion::Clone)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1208840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "Clone",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.HasConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)(::System::Type*)>(
    &::Amazon::DynamoDBv2::DynamoDBEntryConversion::HasConverter)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x12088a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "HasConverter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.TryConvertToEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)(
    ::System::Type*, ::System::Object*, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>)>(&::Amazon::DynamoDBv2::DynamoDBEntryConversion::TryConvertToEntry)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x12088ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "TryConvertToEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.TryConvertFromEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)(
    ::System::Type*, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ByRef<::System::Object*>)>(&::Amazon::DynamoDBv2::DynamoDBEntryConversion::TryConvertFromEntry)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1208be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "TryConvertFromEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.ConvertToEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (
    ::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)(::System::Type*, ::System::Object*)>(&::Amazon::DynamoDBv2::DynamoDBEntryConversion::ConvertToEntry)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1208f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(),
                                                                               "ConvertToEntry", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.ConvertFromEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)(::System::Type*, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(&::Amazon::DynamoDBv2::DynamoDBEntryConversion::ConvertFromEntry)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x12091c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "ConvertFromEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.ConvertToEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* (
    ::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)(::System::Type*, ::System::Collections::IEnumerable*)>(&::Amazon::DynamoDBv2::DynamoDBEntryConversion::ConvertToEntries)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x12094b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "ConvertToEntries", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.ConvertFromEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Object*>* (
    ::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*)>(
    &::Amazon::DynamoDBv2::DynamoDBEntryConversion::ConvertFromEntries)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1209570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "ConvertFromEntries", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.ItemsToPrimitiveList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* (
    ::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)(::System::Collections::IEnumerable*)>(&::Amazon::DynamoDBv2::DynamoDBEntryConversion::ItemsToPrimitiveList)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1209630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "ItemsToPrimitiveList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.AddConverters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DynamoDBEntryConversion::AddConverters)> {
  constexpr static std::size_t size = 0x758;
  constexpr static std::size_t addrs = 0x120978c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "AddConverters",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.AddConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)(::Amazon::DynamoDBv2::Converter*)>(
    &::Amazon::DynamoDBv2::DynamoDBEntryConversion::AddConverter)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1209f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "AddConverter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Converter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.AddConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)(::System::Type*)>(
    &::Amazon::DynamoDBv2::DynamoDBEntryConversion::AddConverter)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1209ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "AddConverter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.SetV1Converters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)()>(
    &::Amazon::DynamoDBv2::DynamoDBEntryConversion::SetV1Converters)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1208730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(),
                                                                               "SetV1Converters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.SetV2Converters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)()>(
    &::Amazon::DynamoDBv2::DynamoDBEntryConversion::SetV2Converters)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1208778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(),
                                                                               "SetV2Converters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DynamoDBEntryConversion.ToPrimitives
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* (
    ::Amazon::DynamoDBv2::DynamoDBEntryConversion::*)(::System::Collections::IEnumerable*, ::System::Type*)>(&::Amazon::DynamoDBv2::DynamoDBEntryConversion::ToPrimitives)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1209700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "ToPrimitives", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Amazon::DynamoDBv2::DynamoDBEntryConversion::__cordl_internal_get__IsImmutable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsImmutable_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DynamoDBEntryConversion::__cordl_internal_get__IsImmutable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsImmutable_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DynamoDBEntryConversion::__cordl_internal_set__IsImmutable_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsImmutable_k__BackingField = value;
}
constexpr ::Amazon::DynamoDBv2::ConverterCache*& Amazon::DynamoDBv2::DynamoDBEntryConversion::__cordl_internal_get_ConverterCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConverterCache;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ConverterCache*> const& Amazon::DynamoDBv2::DynamoDBEntryConversion::__cordl_internal_get_ConverterCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConverterCache;
}
constexpr void Amazon::DynamoDBv2::DynamoDBEntryConversion::__cordl_internal_set_ConverterCache(::Amazon::DynamoDBv2::ConverterCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConverterCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::ConversionSchema& Amazon::DynamoDBv2::DynamoDBEntryConversion::__cordl_internal_get_OriginalConversion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OriginalConversion;
}
constexpr ::Amazon::DynamoDBv2::ConversionSchema const& Amazon::DynamoDBv2::DynamoDBEntryConversion::__cordl_internal_get_OriginalConversion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OriginalConversion;
}
constexpr void Amazon::DynamoDBv2::DynamoDBEntryConversion::__cordl_internal_set_OriginalConversion(::Amazon::DynamoDBv2::ConversionSchema value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OriginalConversion = value;
}
inline void Amazon::DynamoDBv2::DynamoDBEntryConversion::setStaticF__V1_k__BackingField(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, "<V1>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get>(
      std::forward<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>(value));
}
inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Amazon::DynamoDBv2::DynamoDBEntryConversion::getStaticF__V1_k__BackingField() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, "<V1>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get>();
}
inline void Amazon::DynamoDBv2::DynamoDBEntryConversion::setStaticF__V2_k__BackingField(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, "<V2>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get>(
      std::forward<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>(value));
}
inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Amazon::DynamoDBv2::DynamoDBEntryConversion::getStaticF__V2_k__BackingField() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, "<V2>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get>();
}
inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Amazon::DynamoDBv2::DynamoDBEntryConversion::get_V1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "get_V1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, false>(nullptr, ___internal_method);
}
inline void Amazon::DynamoDBv2::DynamoDBEntryConversion::set_V1(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "set_V1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Amazon::DynamoDBv2::DynamoDBEntryConversion::get_V2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "get_V2",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, false>(nullptr, ___internal_method);
}
inline void Amazon::DynamoDBv2::DynamoDBEntryConversion::set_V2(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "set_V2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Amazon::DynamoDBv2::DynamoDBEntryConversion::GetConversion(::Amazon::DynamoDBv2::ConversionSchema schema) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "GetConversion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ConversionSchema>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, false>(nullptr, ___internal_method, schema);
}
inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Amazon::DynamoDBv2::DynamoDBEntryConversion::get_CurrentConversion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(),
                                                                             "get_CurrentConversion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, false>(nullptr, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Amazon::DynamoDBv2::DynamoDBEntryConversion::New_ctor(::Amazon::DynamoDBv2::ConversionSchema schema, bool isImmutable) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>(schema, isImmutable));
}
inline void Amazon::DynamoDBv2::DynamoDBEntryConversion::_ctor(::Amazon::DynamoDBv2::ConversionSchema schema, bool isImmutable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ConversionSchema>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schema, isImmutable);
}
inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Amazon::DynamoDBv2::DynamoDBEntryConversion::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>());
}
inline void Amazon::DynamoDBv2::DynamoDBEntryConversion::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TInput> inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DynamoDBEntryConversion::ConvertToEntry(TInput value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "ConvertToEntry",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInput>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInput>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInput>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(this, ___internal_method, value);
}
template <typename TInput> inline bool Amazon::DynamoDBv2::DynamoDBEntryConversion::TryConvertToEntry(TInput value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> entry) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "TryConvertToEntry",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInput>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInput>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInput>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, entry);
}
template <typename TOutput> inline TOutput Amazon::DynamoDBv2::DynamoDBEntryConversion::ConvertFromEntry(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "ConvertFromEntry",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOutput>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOutput>::get() }));
  return ::cordl_internals::RunMethodRethrow<TOutput, false>(this, ___internal_method, entry);
}
template <typename TOutput> inline bool Amazon::DynamoDBv2::DynamoDBEntryConversion::TryConvertFromEntry(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry, ByRef<TOutput> output) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "TryConvertFromEntry",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOutput>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TOutput>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOutput>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry, output);
}
inline bool Amazon::DynamoDBv2::DynamoDBEntryConversion::get_IsImmutable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(),
                                                                             "get_IsImmutable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DynamoDBEntryConversion::set_IsImmutable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "set_IsImmutable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Amazon::DynamoDBv2::DynamoDBEntryConversion::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "Clone",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, false>(this, ___internal_method);
}
inline bool Amazon::DynamoDBv2::DynamoDBEntryConversion::HasConverter(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "HasConverter",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline bool Amazon::DynamoDBv2::DynamoDBEntryConversion::TryConvertToEntry(::System::Type* inputType, ::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "TryConvertToEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inputType, value, entry);
}
inline bool Amazon::DynamoDBv2::DynamoDBEntryConversion::TryConvertFromEntry(::System::Type* outputType, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry, ByRef<::System::Object*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "TryConvertFromEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, outputType, entry, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DynamoDBEntryConversion::ConvertToEntry(::System::Type* inputType, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(),
                                                                             "ConvertToEntry", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(this, ___internal_method, inputType, value);
}
inline ::System::Object* Amazon::DynamoDBv2::DynamoDBEntryConversion::ConvertFromEntry(::System::Type* outputType, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "ConvertFromEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, outputType, entry);
}
inline ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
Amazon::DynamoDBv2::DynamoDBEntryConversion::ConvertToEntries(::System::Type* elementType, ::System::Collections::IEnumerable* values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "ConvertToEntries", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*, false>(this, ___internal_method, elementType, values);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
Amazon::DynamoDBv2::DynamoDBEntryConversion::ConvertToEntries(::System::Collections::Generic::IEnumerable_1<T>* values) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "ConvertToEntries",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*, false>(this, ___internal_method, values);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>*
Amazon::DynamoDBv2::DynamoDBEntryConversion::ConvertFromEntries(::System::Type* elementType,
                                                                ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* entries) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "ConvertFromEntries", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Object*>*, false>(this, ___internal_method, elementType, entries);
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* Amazon::DynamoDBv2::DynamoDBEntryConversion::ItemsToPrimitiveList(::System::Collections::IEnumerable* items) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "ItemsToPrimitiveList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*, false>(this, ___internal_method, items);
}
inline void Amazon::DynamoDBv2::DynamoDBEntryConversion::AddConverters(::StringW suffix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "AddConverters",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, suffix);
}
inline void Amazon::DynamoDBv2::DynamoDBEntryConversion::AddConverter(::Amazon::DynamoDBv2::Converter* converter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "AddConverter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Converter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, converter);
}
inline void Amazon::DynamoDBv2::DynamoDBEntryConversion::AddConverter(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "AddConverter",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void Amazon::DynamoDBv2::DynamoDBEntryConversion::SetV1Converters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(),
                                                                             "SetV1Converters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DynamoDBEntryConversion::SetV2Converters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(),
                                                                             "SetV2Converters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
Amazon::DynamoDBv2::DynamoDBEntryConversion::ToPrimitives(::System::Collections::IEnumerable* items, ::System::Type* elementType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(), "ToPrimitives", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*, false>(this, ___internal_method, items, elementType);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion::DynamoDBEntryConversion() {}
