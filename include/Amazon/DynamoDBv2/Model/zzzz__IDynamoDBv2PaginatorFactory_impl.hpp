#pragma once
#include "Amazon/DynamoDBv2/Model/zzzz__IDynamoDBv2PaginatorFactory_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__BatchGetItemRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__IBatchGetItemPaginator_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__IListTablesPaginator_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__IQueryPaginator_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__IScanPaginator_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ListTablesRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__QueryRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ScanRequest_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory.BatchGetItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::IBatchGetItemPaginator* (
    ::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory::*)(::Amazon::DynamoDBv2::Model::BatchGetItemRequest*)>(&::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory::BatchGetItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory.ListTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::IListTablesPaginator* (
    ::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory::*)(::Amazon::DynamoDBv2::Model::ListTablesRequest*)>(&::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory::ListTables)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory.Query
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::IQueryPaginator* (
    ::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory::*)(::Amazon::DynamoDBv2::Model::QueryRequest*)>(&::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory::Query)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory.Scan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::IScanPaginator* (
    ::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory::*)(::Amazon::DynamoDBv2::Model::ScanRequest*)>(&::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory::Scan)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*>::get(), 3));
    return ___internal_method;
  }
};
inline ::Amazon::DynamoDBv2::Model::IBatchGetItemPaginator* Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory::BatchGetItem(::Amazon::DynamoDBv2::Model::BatchGetItemRequest* request) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::IBatchGetItemPaginator*, false>(this, ___internal_method, request);
}
inline ::Amazon::DynamoDBv2::Model::IListTablesPaginator* Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory::ListTables(::Amazon::DynamoDBv2::Model::ListTablesRequest* request) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::IListTablesPaginator*, false>(this, ___internal_method, request);
}
inline ::Amazon::DynamoDBv2::Model::IQueryPaginator* Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory::Query(::Amazon::DynamoDBv2::Model::QueryRequest* request) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::IQueryPaginator*, false>(this, ___internal_method, request);
}
inline ::Amazon::DynamoDBv2::Model::IScanPaginator* Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory::Scan(::Amazon::DynamoDBv2::Model::ScanRequest* request) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::IScanPaginator*, false>(this, ___internal_method, request);
}
