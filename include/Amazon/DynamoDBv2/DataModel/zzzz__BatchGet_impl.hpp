#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchGet_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBContext_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBFlatConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__ItemStorageConfig_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DocumentBatchGet_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Key_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.get_UntypedResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Object*>* (::Amazon::DynamoDBv2::DataModel::BatchGet::*)()>(
    &::Amazon::DynamoDBv2::DataModel::BatchGet::get_UntypedResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14212ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(),
                                                                               "get_UntypedResults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.set_UntypedResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::BatchGet::*)(::System::Collections::Generic::List_1<::System::Object*>*)>(
    &::Amazon::DynamoDBv2::DataModel::BatchGet::set_UntypedResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14212f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "set_UntypedResults", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.get_Context
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::DynamoDBContext* (::Amazon::DynamoDBv2::DataModel::BatchGet::*)()>(
    &::Amazon::DynamoDBv2::DataModel::BatchGet::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14212fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "get_Context",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.set_Context
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::BatchGet::*)(::Amazon::DynamoDBv2::DataModel::DynamoDBContext*)>(
    &::Amazon::DynamoDBv2::DataModel::BatchGet::set_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1421304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "set_Context", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.get_Config
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* (::Amazon::DynamoDBv2::DataModel::BatchGet::*)()>(
    &::Amazon::DynamoDBv2::DataModel::BatchGet::get_Config)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142130c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "get_Config",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.set_Config
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::BatchGet::*)(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*)>(
    &::Amazon::DynamoDBv2::DataModel::BatchGet::set_Config)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1421314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "set_Config", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.get_Keys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* (
    ::Amazon::DynamoDBv2::DataModel::BatchGet::*)()>(&::Amazon::DynamoDBv2::DataModel::BatchGet::get_Keys)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142131c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "get_Keys",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.set_Keys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::BatchGet::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*)>(&::Amazon::DynamoDBv2::DataModel::BatchGet::set_Keys)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1421324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "set_Keys", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.get_DocumentBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* (::Amazon::DynamoDBv2::DataModel::BatchGet::*)()>(
    &::Amazon::DynamoDBv2::DataModel::BatchGet::get_DocumentBatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142132c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(),
                                                                               "get_DocumentBatch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.set_DocumentBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::BatchGet::*)(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*)>(
    &::Amazon::DynamoDBv2::DataModel::BatchGet::set_DocumentBatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1421334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "set_DocumentBatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.get_ItemStorageConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* (::Amazon::DynamoDBv2::DataModel::BatchGet::*)()>(
    &::Amazon::DynamoDBv2::DataModel::BatchGet::get_ItemStorageConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142133c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(),
                                                                               "get_ItemStorageConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.set_ItemStorageConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::BatchGet::*)(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*)>(
    &::Amazon::DynamoDBv2::DataModel::BatchGet::set_ItemStorageConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1421344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "set_ItemStorageConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::BatchGet::*)(
    ::Amazon::DynamoDBv2::DataModel::DynamoDBContext*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*)>(&::Amazon::DynamoDBv2::DataModel::BatchGet::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x142134c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.get_Results
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Object*>* (::Amazon::DynamoDBv2::DataModel::BatchGet::*)()>(
    &::Amazon::DynamoDBv2::DataModel::BatchGet::get_Results)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14213e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "get_Results",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.get_ConsistentRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::BatchGet::*)()>(
    &::Amazon::DynamoDBv2::DataModel::BatchGet::get_ConsistentRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14213e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(),
                                                                               "get_ConsistentRead", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.set_ConsistentRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::BatchGet::*)(bool)>(
    &::Amazon::DynamoDBv2::DataModel::BatchGet::set_ConsistentRead)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x14213f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "set_ConsistentRead",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.ExecuteHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::BatchGet::*)()>(&::Amazon::DynamoDBv2::DataModel::BatchGet::ExecuteHelper)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.ExecuteHelperAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::DynamoDBv2::DataModel::BatchGet::*)(::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DataModel::BatchGet::ExecuteHelperAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.CreateDocumentBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::BatchGet::*)()>(
    &::Amazon::DynamoDBv2::DataModel::BatchGet::CreateDocumentBatch)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.PopulateResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::BatchGet::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*)>(&::Amazon::DynamoDBv2::DataModel::BatchGet::PopulateResults)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::BatchGet.ExecuteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::Amazon::DynamoDBv2::DataModel::BatchGet::*)(::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DataModel::BatchGet::ExecuteAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x14213fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "ExecuteAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_get__UntypedResults_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UntypedResults_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const&
Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_get__UntypedResults_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UntypedResults_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_set__UntypedResults_k__BackingField(::System::Collections::Generic::List_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UntypedResults_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContext*& Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_get__Context_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Context_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*> const& Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_get__Context_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Context_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_set__Context_k__BackingField(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Context_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*& Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_get__Config_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Config_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*> const&
Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_get__Config_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Config_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_set__Config_k__BackingField(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Config_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*& Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_get__Keys_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Keys_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*> const&
Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_get__Keys_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Keys_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_set__Keys_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Keys_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*& Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_get__DocumentBatch_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DocumentBatch_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*> const&
Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_get__DocumentBatch_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DocumentBatch_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_set__DocumentBatch_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DocumentBatch_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*& Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_get__ItemStorageConfig_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ItemStorageConfig_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*> const&
Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_get__ItemStorageConfig_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ItemStorageConfig_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_set__ItemStorageConfig_k__BackingField(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ItemStorageConfig_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_get__ConsistentRead_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConsistentRead_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_get__ConsistentRead_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConsistentRead_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::BatchGet::__cordl_internal_set__ConsistentRead_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ConsistentRead_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::System::Object*>* Amazon::DynamoDBv2::DataModel::BatchGet::get_UntypedResults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(),
                                                                             "get_UntypedResults", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Object*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::BatchGet::set_UntypedResults(::System::Collections::Generic::List_1<::System::Object*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "set_UntypedResults", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBContext* Amazon::DynamoDBv2::DataModel::BatchGet::get_Context() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "get_Context",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::BatchGet::set_Context(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "set_Context", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* Amazon::DynamoDBv2::DataModel::BatchGet::get_Config() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "get_Config",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::BatchGet::set_Config(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "set_Config", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* Amazon::DynamoDBv2::DataModel::BatchGet::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "get_Keys",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::BatchGet::set_Keys(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "set_Keys", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Key*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* Amazon::DynamoDBv2::DataModel::BatchGet::get_DocumentBatch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(),
                                                                             "get_DocumentBatch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::BatchGet::set_DocumentBatch(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "set_DocumentBatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchGet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* Amazon::DynamoDBv2::DataModel::BatchGet::get_ItemStorageConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(),
                                                                             "get_ItemStorageConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::BatchGet::set_ItemStorageConfig(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "set_ItemStorageConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::BatchGet* Amazon::DynamoDBv2::DataModel::BatchGet::New_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context,
                                                                                                    ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* config) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::BatchGet*>(context, config));
}
inline void Amazon::DynamoDBv2::DataModel::BatchGet::_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* config) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, config);
}
inline ::System::Collections::Generic::List_1<::System::Object*>* Amazon::DynamoDBv2::DataModel::BatchGet::get_Results() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "get_Results",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Object*>*, false>(this, ___internal_method);
}
inline bool Amazon::DynamoDBv2::DataModel::BatchGet::get_ConsistentRead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(),
                                                                             "get_ConsistentRead", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::BatchGet::set_ConsistentRead(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "set_ConsistentRead",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::DynamoDBv2::DataModel::BatchGet::ExecuteHelper() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::BatchGet::ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline void Amazon::DynamoDBv2::DataModel::BatchGet::CreateDocumentBatch() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::BatchGet::PopulateResults(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* items) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, items);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::BatchGet::ExecuteAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::BatchGet*>::get(), "ExecuteAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::BatchGet::BatchGet() {}
