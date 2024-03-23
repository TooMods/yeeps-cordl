#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__DynamoDBv2PaginatorFactory_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__BatchGetItemRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__IBatchGetItemPaginator_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__IDynamoDBv2PaginatorFactory_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__IListTablesPaginator_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__IQueryPaginator_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__IScanPaginator_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ListTablesRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__QueryRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ScanRequest_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__IAmazonDynamoDB_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::*)(::Amazon::DynamoDBv2::IAmazonDynamoDB*)>(
    &::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x105640c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::IAmazonDynamoDB*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory.BatchGetItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::IBatchGetItemPaginator* (
    ::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::*)(::Amazon::DynamoDBv2::Model::BatchGetItemRequest*)>(&::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::BatchGetItem)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1056434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory*>::get(), "BatchGetItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BatchGetItemRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory.ListTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::IListTablesPaginator* (
    ::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::*)(::Amazon::DynamoDBv2::Model::ListTablesRequest*)>(&::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::ListTables)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x10564a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory*>::get(), "ListTables", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ListTablesRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory.Query
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::IQueryPaginator* (
    ::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::*)(::Amazon::DynamoDBv2::Model::QueryRequest*)>(&::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::Query)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1056548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory*>::get(), "Query", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::QueryRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory.Scan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::IScanPaginator* (
    ::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::*)(::Amazon::DynamoDBv2::Model::ScanRequest*)>(&::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::Scan)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x10565e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory*>::get(), "Scan", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ScanRequest*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory"
constexpr Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::operator ::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*() noexcept {
  return static_cast<::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory"
constexpr ::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory* Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::i___Amazon__DynamoDBv2__Model__IDynamoDBv2PaginatorFactory() noexcept {
  return static_cast<::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*>(static_cast<void*>(this));
}
constexpr ::Amazon::DynamoDBv2::IAmazonDynamoDB*& Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::__cordl_internal_get_client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::IAmazonDynamoDB*> const& Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::__cordl_internal_get_client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client;
}
constexpr void Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::__cordl_internal_set_client(::Amazon::DynamoDBv2::IAmazonDynamoDB* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory* Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::New_ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory*>(client));
}
inline void Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::_ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::IAmazonDynamoDB*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client);
}
inline ::Amazon::DynamoDBv2::Model::IBatchGetItemPaginator* Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::BatchGetItem(::Amazon::DynamoDBv2::Model::BatchGetItemRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory*>::get(), "BatchGetItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BatchGetItemRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::IBatchGetItemPaginator*, false>(this, ___internal_method, request);
}
inline ::Amazon::DynamoDBv2::Model::IListTablesPaginator* Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::ListTables(::Amazon::DynamoDBv2::Model::ListTablesRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory*>::get(), "ListTables", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ListTablesRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::IListTablesPaginator*, false>(this, ___internal_method, request);
}
inline ::Amazon::DynamoDBv2::Model::IQueryPaginator* Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::Query(::Amazon::DynamoDBv2::Model::QueryRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory*>::get(), "Query", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::QueryRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::IQueryPaginator*, false>(this, ___internal_method, request);
}
inline ::Amazon::DynamoDBv2::Model::IScanPaginator* Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::Scan(::Amazon::DynamoDBv2::Model::ScanRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory*>::get(), "Scan", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ScanRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::IScanPaginator*, false>(this, ___internal_method, request);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory::DynamoDBv2PaginatorFactory() {}
