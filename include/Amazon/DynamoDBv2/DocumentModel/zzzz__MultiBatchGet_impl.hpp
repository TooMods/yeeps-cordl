#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__QuickList_1_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeValue_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__BatchGetItemResponse_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__MultiBatchGet_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DocumentBatchGet_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Key_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__MultiBatchGet_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Table_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeValue_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__BatchGetItemRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__BatchGetItemResponse_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBClient_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet.get_Batch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* (
    ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet::*)()>(&::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet::get_Batch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1647ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>::get(), "get_Batch",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet.set_Batch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet::*)(
    ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*)>(&::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet::set_Batch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1647abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>::get(), "set_Batch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet::*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*,
    ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*)>(&::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1647a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*& Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet::__cordl_internal_get__Batch_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Batch_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*> const&
Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet::__cordl_internal_get__Batch_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Batch_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet::__cordl_internal_set__Batch_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Batch_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet::get_Batch() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>::get(), "get_Batch",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet::set_Batch(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>::get(), "set_Batch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet* Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet::New_ctor(
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* items,
    ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* batch) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>(items, batch));
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet::_ctor(
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* items,
    ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* batch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, items, batch);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet::__MultiBatchGet__RequestSet() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results.get_RetrievedItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>* (
    ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::*)()>(&::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::get_RetrievedItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1647ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>::get(), "get_RetrievedItems",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results.set_RetrievedItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW,
                                                 ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>*)>(
    &::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::set_RetrievedItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1647acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>::get(), "set_RetrievedItems", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<
            ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results.get_TargetTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* (
    ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::*)()>(&::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::get_TargetTables)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1647ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>::get(), "get_TargetTables",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results.set_TargetTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>*)>(&::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::set_TargetTables)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1647adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>::get(), "set_TargetTables", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::*)(
    ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*)>(&::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::_ctor)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x16466d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::*)(
    ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*)>(
    &::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::Add)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x164782c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<
    ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>*&
Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::__cordl_internal_get__RetrievedItems_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RetrievedItems_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
    ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>*> const&
Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::__cordl_internal_get__RetrievedItems_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RetrievedItems_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::__cordl_internal_set__RetrievedItems_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<
        ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RetrievedItems_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>*&
Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::__cordl_internal_get__TargetTables_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetTables_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>*> const&
Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::__cordl_internal_get__TargetTables_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetTables_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::__cordl_internal_set__TargetTables_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TargetTables_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,
                                                    ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>*
Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::get_RetrievedItems() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>::get(), "get_RetrievedItems",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::StringW,
                                                   ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>*,
      false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::set_RetrievedItems(
    ::System::Collections::Generic::Dictionary_2<
        ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>::get(), "set_RetrievedItems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<
          ::StringW, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::get_TargetTables() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>::get(), "get_TargetTables",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::set_TargetTables(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>::get(), "set_TargetTables", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::Table*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*
Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::New_ctor(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* batches) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>(batches));
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::_ctor(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* batches) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batches);
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::Add(
    ::StringW tableName, ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* items) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tableName, items);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results::__MultiBatchGet__Results() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x1647ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x16481c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7::__MultiBatchGet___GetItemsHelperAsync_d__7(
    int32_t __1__state,
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
        ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>
        __t__builder,
    ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetItemsHelperAsync_d__7::__MultiBatchGet___GetItemsHelperAsync_d__7() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x1648218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1648524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__4__this", ty: "::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_results_5__2", ty: "::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "_targetTable_5__3", ty: "::Amazon::DynamoDBv2::DocumentModel::Table*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "_clientToUse_5__4", ty: "::Amazon::DynamoDBv2::AmazonDynamoDBClient*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_convertedBatches_5__5", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9::__MultiBatchGet___GetAttributeItemsAsync_d__9(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*> __t__builder,
    ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results* _results_5__2, ::Amazon::DynamoDBv2::DocumentModel::Table* _targetTable_5__3,
    ::Amazon::DynamoDBv2::AmazonDynamoDBClient* _clientToUse_5__4,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>* _convertedBatches_5__5,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_results_5__2 = _results_5__2;
  this->_targetTable_5__3 = _targetTable_5__3;
  this->_clientToUse_5__4 = _clientToUse_5__4;
  this->_convertedBatches_5__5 = _convertedBatches_5__5;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___GetAttributeItemsAsync_d__9::__MultiBatchGet___GetAttributeItemsAsync_d__9() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x164857c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x164891c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "client", ty: "::Amazon::DynamoDBv2::AmazonDynamoDBClient*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "request", ty: "::Amazon::DynamoDBv2::Model::BatchGetItemRequest*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken",
// ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "allResults", ty: "::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::BatchGetItemResponse*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12::__MultiBatchGet___CallUntilCompletionAsync_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Amazon::DynamoDBv2::AmazonDynamoDBClient* client,
    ::Amazon::DynamoDBv2::Model::BatchGetItemRequest* request, ::System::Threading::CancellationToken cancellationToken, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results* allResults,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::Amazon::DynamoDBv2::Model::BatchGetItemResponse*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->client = client;
  this->request = request;
  this->cancellationToken = cancellationToken;
  this->allResults = allResults;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet___CallUntilCompletionAsync_d__12::__MultiBatchGet___CallUntilCompletionAsync_d__12() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x164898c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c._ConvertBatches_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* (
    ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c::*)(::Amazon::DynamoDBv2::DocumentModel::Key*)>(&::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c::_ConvertBatches_b__14_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1648994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c*>::get(), "<ConvertBatches>b__14_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Key*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c::setStaticF___9(::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c*>::get>(
      std::forward<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c*>(value));
}
inline ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c* Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c*>::get>();
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c::setStaticF___9__14_0(
    ::System::Func_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*, "<>9__14_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c*>::get>(
      std::forward<::System::Func_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*>(value));
}
inline ::System::Func_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*
Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::Amazon::DynamoDBv2::DocumentModel::Key*, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>*, "<>9__14_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c*>::get>();
}
inline ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c* Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*
Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c::_ConvertBatches_b__14_0(::Amazon::DynamoDBv2::DocumentModel::Key* k) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c*>::get(), "<ConvertBatches>b__14_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Key*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*, false>(this, ___internal_method, k);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet____c::__MultiBatchGet____c() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet.get_Batches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* (
    ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::*)()>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::get_Batches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1646424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(),
                                                                               "get_Batches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet.set_Batches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*)>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::set_Batches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x164642c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(), "set_Batches", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet.GetItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>* (
        ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::*)()>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::GetItems)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1646434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(),
                                                                               "GetItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet.GetItemsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>* (
        ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::*)(::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::GetItemsAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1646438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(), "GetItemsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet.GetItemsHelperAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>* (
        ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::*)(::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::GetItemsHelperAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1645944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(), "GetItemsHelperAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet.GetItemsHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>* (
        ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::*)()>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::GetItemsHelper)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x1644e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(),
                                                                               "GetItemsHelper", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet.GetAttributeItemsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>* (
    ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::*)(::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::GetAttributeItemsAsync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x16465a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(), "GetAttributeItemsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet.GetAttributeItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results* (
    ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::*)()>(&::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::GetAttributeItems)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x164643c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(),
                                                                               "GetAttributeItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet.CallUntilCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Amazon::DynamoDBv2::AmazonDynamoDBClient*, ::Amazon::DynamoDBv2::Model::BatchGetItemRequest*, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*)>(
        &::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::CallUntilCompletion)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x1647644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(), "CallUntilCompletion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBClient*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BatchGetItemRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet.CallUntilCompletionAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (*)(::Amazon::DynamoDBv2::AmazonDynamoDBClient*, ::Amazon::DynamoDBv2::Model::BatchGetItemRequest*,
                                                      ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*, ::System::Threading::CancellationToken)>(
        &::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::CallUntilCompletionAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1647938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(), "CallUntilCompletionAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBClient*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BatchGetItemRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet.CreateRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::Model::BatchGetItemRequest* (*)(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::CreateRequest)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x164726c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(), "CreateRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet.ConvertBatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>* (::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::*)()>(
        &::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::ConvertBatches)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x1646b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(),
                                                                               "ConvertBatches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet.GetNextRequestItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::StringW, ::Amazon::DynamoDBv2::DocumentModel::
                   __MultiBatchGet__RequestSet*>* (*)(ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>*>, int32_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::GetNextRequestItems)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x1646f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(), "GetNextRequestItems", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1644e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*&
Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::__cordl_internal_get__Batches_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Batches_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*> const&
Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::__cordl_internal_get__Batches_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Batches_k__BackingField;
}
constexpr void
Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::__cordl_internal_set__Batches_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Batches_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::get_Batches() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(),
                                                                             "get_Batches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::set_Batches(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(), "set_Batches", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*
Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::GetItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(),
                                                                             "GetItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*, false>(
      this, ___internal_method);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>*
Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::GetItemsAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(), "GetItemsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>*, false>(
      this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>*
Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::GetItemsHelperAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(), "GetItemsHelperAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*>*, false>(
      this, ___internal_method, cancellationToken);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*
Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::GetItemsHelper() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(),
                                                                             "GetItemsHelper", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>*, false>(
      this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>*
Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::GetAttributeItemsAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(), "GetAttributeItemsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>*, false>(this, ___internal_method, cancellationToken);
}
inline ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results* Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::GetAttributeItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(),
                                                                             "GetAttributeItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::CallUntilCompletion(::Amazon::DynamoDBv2::AmazonDynamoDBClient* client, ::Amazon::DynamoDBv2::Model::BatchGetItemRequest* request,
                                                                                  ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results* allResults) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(), "CallUntilCompletion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBClient*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BatchGetItemRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, client, request, allResults);
}
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::CallUntilCompletionAsync(::Amazon::DynamoDBv2::AmazonDynamoDBClient* client,
                                                                                                                    ::Amazon::DynamoDBv2::Model::BatchGetItemRequest* request,
                                                                                                                    ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results* allResults,
                                                                                                                    ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(), "CallUntilCompletionAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBClient*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BatchGetItemRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__Results*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, client, request, allResults, cancellationToken);
}
inline ::Amazon::DynamoDBv2::Model::BatchGetItemRequest*
Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::CreateRequest(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>* set) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(), "CreateRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::BatchGetItemRequest*, false>(nullptr, ___internal_method, set);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>* Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::ConvertBatches() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(),
                                                                             "ConvertBatches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>*, false>(this,
                                                                                                                                                                                 ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>*
Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::GetNextRequestItems(
    ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>*> getRequestsMap, int32_t maxNumberOfItems) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(), "GetNextRequestItems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::__MultiBatchGet__RequestSet*>*, false>(
      nullptr, ___internal_method, getRequestsMap, maxNumberOfItems);
}
inline ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet* Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::MultiBatchGet::MultiBatchGet() {}
