#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDynamoDBv2PaginatorFactory)
namespace Amazon::DynamoDBv2::Model {
class BatchGetItemRequest;
}
namespace Amazon::DynamoDBv2::Model {
class IBatchGetItemPaginator;
}
namespace Amazon::DynamoDBv2::Model {
class IListTablesPaginator;
}
namespace Amazon::DynamoDBv2::Model {
class IQueryPaginator;
}
namespace Amazon::DynamoDBv2::Model {
class IScanPaginator;
}
namespace Amazon::DynamoDBv2::Model {
class ListTablesRequest;
}
namespace Amazon::DynamoDBv2::Model {
class QueryRequest;
}
namespace Amazon::DynamoDBv2::Model {
class ScanRequest;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class IDynamoDBv2PaginatorFactory;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory);
// Type: Amazon.DynamoDBv2.Model::IDynamoDBv2PaginatorFactory
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::IDynamoDBv2PaginatorFactory*
class CORDL_TYPE IDynamoDBv2PaginatorFactory {
public:
  // Declarations
  /// @brief Method BatchGetItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::DynamoDBv2::Model::IBatchGetItemPaginator* BatchGetItem(::Amazon::DynamoDBv2::Model::BatchGetItemRequest* request);

  /// @brief Method ListTables, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::DynamoDBv2::Model::IListTablesPaginator* ListTables(::Amazon::DynamoDBv2::Model::ListTablesRequest* request);

  /// @brief Method Query, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::DynamoDBv2::Model::IQueryPaginator* Query(::Amazon::DynamoDBv2::Model::QueryRequest* request);

  /// @brief Method Scan, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::DynamoDBv2::Model::IScanPaginator* Scan(::Amazon::DynamoDBv2::Model::ScanRequest* request);

  // Ctor Parameters [CppParam { name: "", ty: "IDynamoDBv2PaginatorFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDynamoDBv2PaginatorFactory(IDynamoDBv2PaginatorFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDynamoDBv2PaginatorFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDynamoDBv2PaginatorFactory(IDynamoDBv2PaginatorFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*, "Amazon.DynamoDBv2.Model", "IDynamoDBv2PaginatorFactory");
