#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DynamoDBv2PaginatorFactory)
namespace Amazon::DynamoDBv2::Model {
class BatchGetItemRequest;
}
namespace Amazon::DynamoDBv2::Model {
class IBatchGetItemPaginator;
}
namespace Amazon::DynamoDBv2::Model {
class IDynamoDBv2PaginatorFactory;
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
namespace Amazon::DynamoDBv2 {
class IAmazonDynamoDB;
}
// Forward declare root types
namespace Amazon::DynamoDBv2::Model {
class DynamoDBv2PaginatorFactory;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory);
// Type: Amazon.DynamoDBv2.Model::DynamoDBv2PaginatorFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::DynamoDBv2::Model {
// Is value type: false
// CS Name: ::Amazon.DynamoDBv2.Model::DynamoDBv2PaginatorFactory*
class CORDL_TYPE DynamoDBv2PaginatorFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field client, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_client, put = __cordl_internal_set_client))::Amazon::DynamoDBv2::IAmazonDynamoDB* client;

  /// @brief Convert operator to "::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory"
  constexpr operator ::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory*() noexcept;

  /// @brief Method BatchGetItem, addr 0x1056434, size 0x74, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::Model::IBatchGetItemPaginator* BatchGetItem(::Amazon::DynamoDBv2::Model::BatchGetItemRequest* request);

  /// @brief Method ListTables, addr 0x10564a8, size 0x74, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::Model::IListTablesPaginator* ListTables(::Amazon::DynamoDBv2::Model::ListTablesRequest* request);

  static inline ::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory* New_ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client);

  /// @brief Method Query, addr 0x1056548, size 0x74, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::Model::IQueryPaginator* Query(::Amazon::DynamoDBv2::Model::QueryRequest* request);

  /// @brief Method Scan, addr 0x10565e8, size 0x74, virtual true, abstract: false, final true
  inline ::Amazon::DynamoDBv2::Model::IScanPaginator* Scan(::Amazon::DynamoDBv2::Model::ScanRequest* request);

  constexpr ::Amazon::DynamoDBv2::IAmazonDynamoDB*& __cordl_internal_get_client();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::IAmazonDynamoDB*> const& __cordl_internal_get_client() const;

  constexpr void __cordl_internal_set_client(::Amazon::DynamoDBv2::IAmazonDynamoDB* value);

  /// @brief Method .ctor, addr 0x105640c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::DynamoDBv2::IAmazonDynamoDB* client);

  /// @brief Convert to "::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory"
  constexpr ::Amazon::DynamoDBv2::Model::IDynamoDBv2PaginatorFactory* i___Amazon__DynamoDBv2__Model__IDynamoDBv2PaginatorFactory() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamoDBv2PaginatorFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBv2PaginatorFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamoDBv2PaginatorFactory(DynamoDBv2PaginatorFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamoDBv2PaginatorFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamoDBv2PaginatorFactory(DynamoDBv2PaginatorFactory const&) = delete;

  /// @brief Field client, offset: 0x10, size: 0x8, def value: None
  ::Amazon::DynamoDBv2::IAmazonDynamoDB* ___client;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory, ___client) == 0x10, "Offset mismatch!");

} // namespace Amazon::DynamoDBv2::Model
NEED_NO_BOX(::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::DynamoDBv2::Model::DynamoDBv2PaginatorFactory*, "Amazon.DynamoDBv2.Model", "DynamoDBv2PaginatorFactory");
