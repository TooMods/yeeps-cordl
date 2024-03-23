#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DocumentBatchWrite_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Key_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__MultiTableDocumentBatchWrite_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Primitive_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Table_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite.get_TargetTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::Table* (::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::get_TargetTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x164899c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(),
                                                                               "get_TargetTable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite.set_TargetTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)(::Amazon::DynamoDBv2::DocumentModel::Table*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::set_TargetTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16489a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "set_TargetTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite.get_ToDelete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* (
    ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::get_ToDelete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16489ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(),
                                                                               "get_ToDelete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite.set_ToDelete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*)>(&::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::set_ToDelete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16489b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "set_ToDelete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite.get_ToPut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* (
    ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::get_ToPut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16489bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(),
                                                                               "get_ToPut", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite.set_ToPut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*)>(&::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::set_ToPut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16489c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "set_ToPut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)(::Amazon::DynamoDBv2::DocumentModel::Table*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x16489cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite.AddKeyToDelete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)(::Amazon::DynamoDBv2::DocumentModel::Primitive*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::AddKeyToDelete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1648aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "AddKeyToDelete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite.AddKeyToDelete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)(
    ::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Amazon::DynamoDBv2::DocumentModel::Primitive*)>(&::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::AddKeyToDelete)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1648aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "AddKeyToDelete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite.AddKeyToDelete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*)>(&::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::AddKeyToDelete)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1648b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "AddKeyToDelete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite.AddItemToDelete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)(::Amazon::DynamoDBv2::DocumentModel::Document*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::AddItemToDelete)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1648ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "AddItemToDelete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Document*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite.AddDocumentToPut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)(::Amazon::DynamoDBv2::DocumentModel::Document*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::AddDocumentToPut)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1648bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "AddDocumentToPut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Document*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite.Combine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite* (
    ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*)>(&::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::Combine)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1648c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite.ExecuteHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::ExecuteHelper)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1648e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(),
                                                                               "ExecuteHelper", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite.ExecuteHelperAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)(::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::ExecuteHelperAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1649038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "ExecuteHelperAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite.AddKeyToDelete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)(::Amazon::DynamoDBv2::DocumentModel::Key*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::AddKeyToDelete)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1648ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "AddKeyToDelete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Key*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite.ExecuteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::*)(::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::ExecuteAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1649168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "ExecuteAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::DocumentModel::Table*& Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::__cordl_internal_get__TargetTable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetTable_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::Table*> const&
Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::__cordl_internal_get__TargetTable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetTable_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::__cordl_internal_set__TargetTable_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::Table* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TargetTable_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*& Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::__cordl_internal_get__ToDelete_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ToDelete_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*> const&
Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::__cordl_internal_get__ToDelete_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ToDelete_k__BackingField;
}
constexpr void
Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::__cordl_internal_set__ToDelete_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ToDelete_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*&
Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::__cordl_internal_get__ToPut_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ToPut_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*> const&
Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::__cordl_internal_get__ToPut_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ToPut_k__BackingField;
}
constexpr void
Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::__cordl_internal_set__ToPut_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ToPut_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::DocumentModel::Table* Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::get_TargetTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(),
                                                                             "get_TargetTable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Table*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::set_TargetTable(::Amazon::DynamoDBv2::DocumentModel::Table* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "set_TargetTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::get_ToDelete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(),
                                                                             "get_ToDelete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::set_ToDelete(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "set_ToDelete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::get_ToPut() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(),
                                                                             "get_ToPut", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::set_ToPut(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "set_ToPut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite* Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::New_ctor(::Amazon::DynamoDBv2::DocumentModel::Table* targetTable) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>(targetTable));
}
inline void Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::_ctor(::Amazon::DynamoDBv2::DocumentModel::Table* targetTable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetTable);
}
inline void Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::AddKeyToDelete(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "AddKeyToDelete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hashKey);
}
inline void Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::AddKeyToDelete(::Amazon::DynamoDBv2::DocumentModel::Primitive* hashKey, ::Amazon::DynamoDBv2::DocumentModel::Primitive* rangeKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "AddKeyToDelete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hashKey, rangeKey);
}
inline void Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::AddKeyToDelete(::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "AddKeyToDelete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::AddItemToDelete(::Amazon::DynamoDBv2::DocumentModel::Document* document) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "AddItemToDelete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Document*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, document);
}
inline void Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::AddDocumentToPut(::Amazon::DynamoDBv2::DocumentModel::Document* document) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "AddDocumentToPut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Document*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, document);
}
inline ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*
Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::Combine(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite* otherBatch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*, false>(this, ___internal_method, otherBatch);
}
inline void Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::ExecuteHelper() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(),
                                                                             "ExecuteHelper", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "ExecuteHelperAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline void Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::AddKeyToDelete(::Amazon::DynamoDBv2::DocumentModel::Key* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "AddKeyToDelete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Key*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::ExecuteAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get(), "ExecuteAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite::DocumentBatchWrite() {}
